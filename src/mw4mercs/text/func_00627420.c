/* FUN_00627420 - __thiscall, 50 bytes
   ABL interpreter region. */
extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void func_00627420(void)
{
    __asm {
        push esi
        mov esi, dword ptr [ecx+0x12c]
        push edi
        mov edi, dword ptr [esp+0xc]
        test edi, edi
        jz L_4d
        mov al, byte ptr [esi+0x134]
        test al, al
        jnz L_4d
        lea ecx, [esi+0x54]
        call FUN_0041fd80
        cmp edi, eax
        jnz L_4d
        mov byte ptr [esi+0x134], 1
    L_4d:
        pop edi
        pop esi
        ret 4
    }
}
