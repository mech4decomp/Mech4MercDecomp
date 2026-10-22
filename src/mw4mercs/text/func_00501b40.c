// Auto-generated: call destructors on sub-objects at ecx+0x74, ecx+0x44, ecx
// FUN_00501b40, 28 bytes

void FUN_00500e30(void);
void FUN_00501620(void);
void FUN_004f3020(void);

__declspec(naked) void func_00501b40(void)
{
    __asm {
        push esi
        mov esi, ecx        // esi = this
        lea ecx, [esi+0x74]
        call FUN_00500e30
        lea ecx, [esi+0x44]
        call FUN_00501620
        mov ecx, esi
        call FUN_004f3020
        pop esi
        ret
    }
}
