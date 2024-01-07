.PHONY: clean All

All:
	@echo "----------Building project:[ BaseClassPointer - Debug ]----------"
	@cd "BaseClassPointer" && "$(MAKE)" -f  "BaseClassPointer.mk"
clean:
	@echo "----------Cleaning project:[ BaseClassPointer - Debug ]----------"
	@cd "BaseClassPointer" && "$(MAKE)" -f  "BaseClassPointer.mk" clean
