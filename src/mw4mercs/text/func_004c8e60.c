/*
 * FUN_004C8E60 (40 B) — XOR-based deallocation helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *ptr);
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void FUN_004c8e60(void)
{
    __asm {
        mov     ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [DAT_007dab40]
        xor     eax, dword ptr [ecx]
        push    eax
        mov     dword ptr [DAT_007dab40], eax
        call    FUN_004084e0
        mov     edx, dword ptr [DAT_007dab44]
        push    edx
        call    FUN_004084e0
        add     esp, 8
        ret
    }
}
