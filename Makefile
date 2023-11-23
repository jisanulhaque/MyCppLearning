.PHONY: clean All

All:
	@echo "----------Building project:[ Protected-Members-Class-Access - Debug ]----------"
	@cd "Protected-Members-Class-Access" && "$(MAKE)" -f  "Protected-Members-Class-Access.mk"
clean:
	@echo "----------Cleaning project:[ Protected-Members-Class-Access - Debug ]----------"
	@cd "Protected-Members-Class-Access" && "$(MAKE)" -f  "Protected-Members-Class-Access.mk" clean
