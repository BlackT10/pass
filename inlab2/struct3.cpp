SCP* cloneSCP(SCP* original) {
    SCP* cloned = new SCP;
    *cloned = *original;
    cloned->speConProcedures = original->speConProcedures;
    cloned->description = original->description;
    cloned->addendums = new string[original->numAddendums];
    for (int i = 0; i < original->numAddendums; i++) {
        cloned->addendums[i] = original->addendums[i];
    }
    return cloned;
}