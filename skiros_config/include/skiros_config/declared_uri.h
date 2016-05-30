#ifndef DECLARED_URI_H 
#define DECLARED_URI_H 
namespace skiros_config 
{ 
namespace owl 
{
namespace concept 
{
enum ConceptType 
{
    Actuator, 
    Agent, 
    Alternator, 
    Arm, 
    ArmController, 
    AtPoseState, 
    AttachState, 
    BonnPlanner, 
    BoundingBox, 
    Box, 
    Calibrate, 
    Camera, 
    Carrying, 
    Cell, 
    CellA, 
    CellB, 
    CellC, 
    CellD, 
    CellE, 
    CellF, 
    CellG, 
    CellInKit, 
    Compressor, 
    Computer, 
    Concept, 
    Condition, 
    Container, 
    ContainerRegion, 
    ContainerState, 
    Controller, 
    Conveyor, 
    Cross, 
    Demarreur, 
    Device, 
    DeviceState, 
    DockingStation, 
    Drive, 
    Driver, 
    Effect, 
    EmptyHanded, 
    EndEffector, 
    EndEffectorController, 
    EngineSupport, 
    ExecutionTime, 
    FitsIn, 
    GraspingPose, 
    Gripper, 
    Holding, 
    Human, 
    InKit, 
    Kit, 
    KittingRegion, 
    LargeBox, 
    LargeBoxCell, 
    LargeBoxLevel, 
    LearnedParam, 
    LearningModule, 
    LedLocator3d, 
    Level, 
    LocateModule, 
    Location, 
    LocationEmpty, 
    LocationFull, 
    Manipulatable, 
    MathPrimitive, 
    MobileBase, 
    Module, 
    MotionModule, 
    MotionPlanner, 
    MoveitPlanner, 
    MoveitWM, 
    NavigationRegion, 
    ObjectAtLocation, 
    ObjectInCell, 
    ObjectState, 
    ObservationPose, 
    Param, 
    ParkingStation, 
    PhysicalObject, 
    Pick, 
    Place, 
    PlacingPose, 
    Planner, 
    PointLocator3d, 
    PostCondition, 
    PreCondition, 
    Primitive, 
    Product, 
    PropertyCondition, 
    PsaPartReference, 
    Rack, 
    RackCell, 
    RackLevel, 
    Reasoner, 
    Region, 
    Registration, 
    Reification, 
    RelationCondition, 
    Requirement, 
    Robot, 
    RobotAtLocation, 
    RobotDescription, 
    RobotStatePublisher, 
    RootRegion, 
    Scene, 
    Segmentation, 
    Sensor, 
    SimpleArmController, 
    SimpleEndEffectorController, 
    Skill, 
    SkirosWM, 
    SmallBox, 
    Snapshot, 
    Spatial, 
    SpatialReasoner, 
    Starter, 
    State, 
    Surface, 
    Tf, 
    ThermalShield, 
    TransformEstimator, 
    TransformNode, 
    Tube, 
    Unknown, 
    VisionModule, 
    VisionPrimitive, 
    WorldModel, 
    r1464009084r37018r22, 
}; 
 
static const char * Str[] = 
{ 
    "Actuator", 
    "Agent", 
    "Alternator", 
    "Arm", 
    "ArmController", 
    "AtPoseState", 
    "AttachState", 
    "BonnPlanner", 
    "BoundingBox", 
    "Box", 
    "Calibrate", 
    "Camera", 
    "Carrying", 
    "Cell", 
    "CellA", 
    "CellB", 
    "CellC", 
    "CellD", 
    "CellE", 
    "CellF", 
    "CellG", 
    "CellInKit", 
    "Compressor", 
    "Computer", 
    "Concept", 
    "Condition", 
    "Container", 
    "ContainerRegion", 
    "ContainerState", 
    "Controller", 
    "Conveyor", 
    "Cross", 
    "Demarreur", 
    "Device", 
    "DeviceState", 
    "DockingStation", 
    "Drive", 
    "Driver", 
    "Effect", 
    "EmptyHanded", 
    "EndEffector", 
    "EndEffectorController", 
    "EngineSupport", 
    "ExecutionTime", 
    "FitsIn", 
    "GraspingPose", 
    "Gripper", 
    "Holding", 
    "Human", 
    "InKit", 
    "Kit", 
    "KittingRegion", 
    "LargeBox", 
    "LargeBoxCell", 
    "LargeBoxLevel", 
    "LearnedParam", 
    "LearningModule", 
    "LedLocator3d", 
    "Level", 
    "LocateModule", 
    "Location", 
    "LocationEmpty", 
    "LocationFull", 
    "Manipulatable", 
    "MathPrimitive", 
    "MobileBase", 
    "Module", 
    "MotionModule", 
    "MotionPlanner", 
    "MoveitPlanner", 
    "MoveitWM", 
    "NavigationRegion", 
    "ObjectAtLocation", 
    "ObjectInCell", 
    "ObjectState", 
    "ObservationPose", 
    "Param", 
    "ParkingStation", 
    "PhysicalObject", 
    "Pick", 
    "Place", 
    "PlacingPose", 
    "Planner", 
    "PointLocator3d", 
    "PostCondition", 
    "PreCondition", 
    "Primitive", 
    "Product", 
    "PropertyCondition", 
    "PsaPartReference", 
    "Rack", 
    "RackCell", 
    "RackLevel", 
    "Reasoner", 
    "Region", 
    "Registration", 
    "Reification", 
    "RelationCondition", 
    "Requirement", 
    "Robot", 
    "RobotAtLocation", 
    "RobotDescription", 
    "RobotStatePublisher", 
    "RootRegion", 
    "Scene", 
    "Segmentation", 
    "Sensor", 
    "SimpleArmController", 
    "SimpleEndEffectorController", 
    "Skill", 
    "SkirosWM", 
    "SmallBox", 
    "Snapshot", 
    "Spatial", 
    "SpatialReasoner", 
    "Starter", 
    "State", 
    "Surface", 
    "Tf", 
    "ThermalShield", 
    "TransformEstimator", 
    "TransformNode", 
    "Tube", 
    "Unknown", 
    "VisionModule", 
    "VisionPrimitive", 
    "WorldModel", 
    "r1464009084r37018r22", 
}; 
} 
namespace relation 
{
enum RelationType 
{
    conditionProperty, 
    contain, 
    dependsOn, 
    hasA, 
    hasModule, 
    hasObject, 
    hasParameter, 
    hasPostCondition, 
    hasPreCondition, 
    hasReferenceFrame, 
    hasRegisteredShot, 
    hasSkill, 
    hasStartLocation, 
    hasSubject, 
    isInKit, 
    learnParam, 
    left, 
    relatedTo, 
    right, 
    robotAt, 
    robotProperty, 
    sceneProperty, 
    skillProperty, 
    spatiallyRelated, 
}; 
 
static const char * Str[] = 
{ 
    "conditionProperty", 
    "contain", 
    "dependsOn", 
    "hasA", 
    "hasModule", 
    "hasObject", 
    "hasParameter", 
    "hasPostCondition", 
    "hasPreCondition", 
    "hasReferenceFrame", 
    "hasRegisteredShot", 
    "hasSkill", 
    "hasStartLocation", 
    "hasSubject", 
    "isInKit", 
    "learnParam", 
    "left", 
    "relatedTo", 
    "right", 
    "robotAt", 
    "robotProperty", 
    "sceneProperty", 
    "skillProperty", 
    "spatiallyRelated", 
}; 
} 
namespace data 
{
enum DataType 
{
    AssociatedClass, 
    BaseFrameId, 
    CADModel, 
    CameraTopics, 
    ConditionProperty, 
    ContainerState, 
    DepthImageRaw, 
    DepthTopic, 
    DiscreteReasoner, 
    DriverAddress, 
    DriverName, 
    DriverPackage, 
    DriverParam, 
    DriverSpec, 
    FrameId, 
    FrontAxis, 
    GripperModality, 
    GripperSpec, 
    LinkedToFrameId, 
    LogisticPlannerProperty, 
    MotionExe, 
    MotionPlanner, 
    MoveItGroup, 
    MrsMap, 
    NavigationGoalId, 
    Orientation, 
    OrientationW, 
    OrientationX, 
    OrientationY, 
    OrientationZ, 
    PddlDescription, 
    PhysicalObjectProperty, 
    Position, 
    PositionX, 
    PositionY, 
    PositionZ, 
    PublishTf, 
    RecognitionProperty, 
    ResourceMgr, 
    RgbTopic, 
    RobotSpec, 
    Size, 
    SizeX, 
    SizeY, 
    SizeZ, 
    SkillMgr, 
    SkillSpec, 
    SpatialReasoner, 
    StateProperty, 
    TransformationProperty, 
    Weight, 
    hasDesiredValue, 
    hasObjectType, 
    hasSubjectType, 
    nrParts, 
    partReference, 
    sequenceNr, 
}; 
 
static const char * Str[] = 
{ 
    "AssociatedClass", 
    "BaseFrameId", 
    "CADModel", 
    "CameraTopics", 
    "ConditionProperty", 
    "ContainerState", 
    "DepthImageRaw", 
    "DepthTopic", 
    "DiscreteReasoner", 
    "DriverAddress", 
    "DriverName", 
    "DriverPackage", 
    "DriverParam", 
    "DriverSpec", 
    "FrameId", 
    "FrontAxis", 
    "GripperModality", 
    "GripperSpec", 
    "LinkedToFrameId", 
    "LogisticPlannerProperty", 
    "MotionExe", 
    "MotionPlanner", 
    "MoveItGroup", 
    "MrsMap", 
    "NavigationGoalId", 
    "Orientation", 
    "OrientationW", 
    "OrientationX", 
    "OrientationY", 
    "OrientationZ", 
    "PddlDescription", 
    "PhysicalObjectProperty", 
    "Position", 
    "PositionX", 
    "PositionY", 
    "PositionZ", 
    "PublishTf", 
    "RecognitionProperty", 
    "ResourceMgr", 
    "RgbTopic", 
    "RobotSpec", 
    "Size", 
    "SizeX", 
    "SizeY", 
    "SizeZ", 
    "SkillMgr", 
    "SkillSpec", 
    "SpatialReasoner", 
    "StateProperty", 
    "TransformationProperty", 
    "Weight", 
    "hasDesiredValue", 
    "hasObjectType", 
    "hasSubjectType", 
    "nrParts", 
    "partReference", 
    "sequenceNr", 
}; 
} 
namespace individual 
{
enum IndividualType 
{
    ContainerStateEmpty, 
    ContainerStateFull, 
    aau_lab, 
    aau_stamina_robot, 
    aau_stamina_robot_description, 
    alternator, 
    arm_camera, 
    arm_camera_lh, 
    cell_a, 
    cell_b, 
    cell_c, 
    cell_d, 
    cell_e, 
    cell_f, 
    cell_g, 
    compressor, 
    cross, 
    demarreur, 
    engine_support, 
    fanuc_m20ia20m, 
    kitting_box_fixed, 
    kitting_box_fixed_2, 
    kitting_box_fixed_3, 
    kuka, 
    large_box, 
    large_box_test_alternator, 
    large_box_test_compressor, 
    large_box_test_demarreur, 
    large_box_test_engine_support_and_thermal_shield, 
    large_box_test_starter, 
    large_box_test_tube, 
    lh_mobile_base, 
    lh_robot, 
    lh_surface, 
    medium_box, 
    medium_starter, 
    mobile_base, 
    no_name, 
    parking_station_test, 
    rq3, 
    rq3_gripper_driver, 
    small_box, 
    small_box_tube, 
    small_starter, 
    stamina_mobile_base, 
    stamina_robot, 
    starter, 
    thermal_shield, 
    top_front_camera, 
    top_left_camera, 
    top_right_camera, 
    tube, 
    unknown_location, 
    ur10, 
    ur10_arm_driver, 
    wsg_gripper, 
    xtion_camera_driver, 
}; 
 
static const char * Str[] = 
{ 
    "ContainerStateEmpty", 
    "ContainerStateFull", 
    "aau_lab", 
    "aau_stamina_robot", 
    "aau_stamina_robot_description", 
    "alternator", 
    "arm_camera", 
    "arm_camera_lh", 
    "cell_a", 
    "cell_b", 
    "cell_c", 
    "cell_d", 
    "cell_e", 
    "cell_f", 
    "cell_g", 
    "compressor", 
    "cross", 
    "demarreur", 
    "engine_support", 
    "fanuc_m20ia20m", 
    "kitting_box_fixed", 
    "kitting_box_fixed_2", 
    "kitting_box_fixed_3", 
    "kuka", 
    "large_box", 
    "large_box_test_alternator", 
    "large_box_test_compressor", 
    "large_box_test_demarreur", 
    "large_box_test_engine_support_and_thermal_shield", 
    "large_box_test_starter", 
    "large_box_test_tube", 
    "lh_mobile_base", 
    "lh_robot", 
    "lh_surface", 
    "medium_box", 
    "medium_starter", 
    "mobile_base", 
    "no_name", 
    "parking_station_test", 
    "rq3", 
    "rq3_gripper_driver", 
    "small_box", 
    "small_box_tube", 
    "small_starter", 
    "stamina_mobile_base", 
    "stamina_robot", 
    "starter", 
    "thermal_shield", 
    "top_front_camera", 
    "top_left_camera", 
    "top_right_camera", 
    "tube", 
    "unknown_location", 
    "ur10", 
    "ur10_arm_driver", 
    "wsg_gripper", 
    "xtion_camera_driver", 
}; 
 
}
} }

#endif //DECLARED_URI_H