.PHONY: clean All

All:
	@echo "----------Building project:[ ConstructorInitializationList - Debug ]----------"
	@cd "ConstructorInitializationList" && "$(MAKE)" -f  "ConstructorInitializationList.mk"
clean:
	@echo "----------Cleaning project:[ ConstructorInitializationList - Debug ]----------"
	@cd "ConstructorInitializationList" && "$(MAKE)" -f  "ConstructorInitializationList.mk" clean
