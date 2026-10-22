/* func_004d2ee0.c - inline-asm transcription of FUN_004d2ee0 (132 B) */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416f20(void);
extern void __cdecl FUN_004179b0(void);
extern int g_007b8c10;   /* DAT_007b8c10 */

__declspec(naked) void* func_004d2ee0(void)
{
    __asm {
        push ebp
        push esi
        push 0x20
        mov ebp, ecx
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz loc_f3c
        mov eax, dword ptr [g_007b8c10]
        push edi
        mov edi, dword ptr [esp+0x14]
        push eax
        mov ecx, esi
        call FUN_00415180
        mov ecx, dword ptr [esp+0x10]
        mov dl, byte ptr [esp+0x1c]
        mov word ptr [esi+0x1a], di
        mov dword ptr [esi+0x8], 0x0
        mov dword ptr [esi+0xc], 0x0
        mov dword ptr [esi+0x10], ecx
        mov dword ptr [esi+0x14], 0x0
        mov word ptr [esi+0x18], 0xffff
        mov byte ptr [esi+0x1c], dl
        mov dword ptr [esi], 0x77260c
        pop edi
        jmp loc_f3e
    loc_f3c:
        xor esi, esi
    loc_f3e:
        lea eax, [esp+0x10]
        push eax
        push esi
        lea ecx, [ebp+0x14]
        call FUN_00416f20
        mov al, byte ptr [esp+0x14]
        test al, al
        jnz loc_f5d
        push esi
        lea ecx, [ebp+0x2c]
        call FUN_004179b0
    loc_f5d:
        mov eax, esi
        pop esi
        pop ebp
        ret 0x10
    }
}
