note
	description: "List of used ROS topics for interaction with Thymio robot."
	author: "Rusakov Andrey"
	date: "28.08.2013"

class
	THYMIO_TOPICS

feature -- Constants

	-- Used topics.
	odometry: STRING_8 = "/thymio_driver/odometry"
	velocity: STRING_8 = "/thymio_driver/cmd_vel"
	prox_horizontal: STRING_8 = "/thymio_driver/prox_horizontal"
	prox_ground: STRING_8 = "/thymio_driver/prox_ground"
	sound: STRING_8 = "/aseba/events/sound_cmd"
	circle_leds: STRING_8 = "/aseba/events/circle_leds_cmd"
	buttons_leds: STRING_8 = "/aseba/events/buttons_leds_cmd"
	top_leds: STRING_8 = "/aseba/events/top_leds_cmd"

	prox_ground_link_0: STRING_8 = "/thymio_prox_ground_0_link"
	prox_ground_link_1: STRING_8 = "/thymio_prox_ground_1_link"

	prox_horizontal_link_0: STRING_8 = "/thymio_prox_horizontal_0_link"
	prox_horizontal_link_1: STRING_8 = "/thymio_prox_horizontal_1_link"
	prox_horizontal_link_2: STRING_8 = "/thymio_prox_horizontal_2_link"
	prox_horizontal_link_3: STRING_8 = "/thymio_prox_horizontal_3_link"
	prox_horizontal_link_4: STRING_8 = "/thymio_prox_horizontal_4_link"
	prox_horizontal_link_5: STRING_8 = "/thymio_prox_horizontal_5_link"
	prox_horizontal_link_6: STRING_8 = "/thymio_prox_horizontal_6_link"

	path: STRING_8 = "/path_planner/path"
	pose: STRING_8 = "/path_planner/pose"
	map: STRING_8 = "/map"
	path_calculated: STRING_8 = "/path"
	object_recognition_request: STRING_8 = "/object_recognition_request"
	odometry_link_frame: STRING_8 = "/odometry_link"
	object_recognition_answer: STRING_8 = "/object_recognition_answer"
	object_recognition_human_counter: STRING_8 = "/object_recognition_human_counter/"
	localization_odometry: STRING_8 = "/localization/odometry"
	localization_start: STRING_8 = "/localization/start"
	localization_flag: STRING_8 = "/localization/flag"
end

