string convertToString(SCP obj) {
    stringstream ss;

    // Item #
    ss << "Item #: SCP-";
    ss.width(3);
    ss.fill('0');
    ss << obj.id << endl;

    // Object Class
    ss << "Object Class: ";
    if (obj.objClass == 0) {
        ss << "Safe" << endl;
    } else if (obj.objClass == 1) {
        ss << "Euclid" << endl;
    } else if (obj.objClass == 2) {
        ss << "Keter" << endl;
    }

    // Special Containment Procedures
    ss << "Special Containment Procedures: " << obj.speConProcedures << endl;

    // Description
    ss << "Description: " << obj.description << endl;

    // Addendums
    for (int i = 0; i < obj.numAddendums; i++) {
        ss << obj.addendums[i] << endl;
    }

    return ss.str();
}