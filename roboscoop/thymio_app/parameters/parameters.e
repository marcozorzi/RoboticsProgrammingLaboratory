note
	description: "Class dealing with the initialization and the storage of the different parameters"
	author: "Seewer Antoine"
	date: "08.11.2015"


class
	PARAMETERS

create
	make

feature {NONE} -- Initialization

	make
		do
				-- Initialize sensors.
			create parameter_file_paths_parser
			create parameter_file_paths.make_empty
			create general_parser
			create general_parameters.make
			create go_to_goal_parser
			create go_to_goal_parameters
			create obstacle_avoidance_parser
			create obstacle_avoidance_parameters
			create path_planning_parser
			create path_planning_parameters
			create localization_parser
			create localization_parameters
		end

feature -- Access

	initialize(argument: separate STRING_8)
		local
			non_separate_arg: STRING_8
		do
			create non_separate_arg.make_from_separate(argument)
			parameter_file_paths := parameter_file_paths_parser.read_parameter_file_paths(non_separate_arg)
			general_parameters := general_parser.initialize_parameters (parameter_file_paths.general_parameter_file_path)
			go_to_goal_parameters := go_to_goal_parser.initialize_parameters (parameter_file_paths.go_to_goal_parameter_file_path)
			obstacle_avoidance_parameters := obstacle_avoidance_parser.initialize_parameters (parameter_file_paths.obstacle_avoidance_parameter_file_path)
			path_planning_parameters := path_planning_parser.initialize_parameters (parameter_file_paths.path_planning_parameter_file_path)
			localization_parameters := localization_parser.initialize_parameters(parameter_file_paths.localization_parameter_file_path)

			print ("%N" + general_parameters.out + "%N"
						+ go_to_goal_parameters.out + "%N"
						+ obstacle_avoidance_parameters.out + "%N"
						+ path_planning_parameters.out +  "%N"
						+ localization_parameters.out +  "%N")
		end

feature -- Parameter subclasses

	parameter_file_paths_parser: PARAMETER_FILE_PATHS_PARSER

	parameter_file_paths: PARAMETER_FILE_PATHS

	general_parser: MISSION_PARSER

	general_parameters: MISSION_PARAMETERS

	go_to_goal_parser: GO_TO_GOAL_PARSER

	go_to_goal_parameters: GO_TO_GOAL_PARAMETERS

	obstacle_avoidance_parser: OBSTACLE_AVOIDANCE_PARSER

	obstacle_avoidance_parameters: OBSTACLE_AVOIDANCE_PARAMETERS

	path_planning_parser: PATH_PLANNING_PARSER

	path_planning_parameters: PATH_PLANNING_PARAMETERS

	localization_parser: LOCALIZATION_PARSER

	localization_parameters: LOCALIZATION_PARAMETERS

end
