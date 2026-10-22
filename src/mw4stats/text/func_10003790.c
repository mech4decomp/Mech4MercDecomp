/*
 * MW4Stats.dll - FUN_10003790 (0x10003790, 141 B, __thiscall)
 * SEH prologue; looks up param_1 in map at this+4 (FUN_10004150); if not
 * found, allocates 0x1c via operator new (0x1001ee16), constructs via
 * FUN_10003860, inserts into map via FUN_100041d0. RET 0x4.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10004150(void);
extern void __cdecl FUN_1001ee16(void);
extern void __cdecl FUN_10003860(void);
extern void __cdecl FUN_100041d0(void);

__declspec(naked) void FUN_10003790(void)
{
    __asm {
        mov eax, dword ptr fs:[0]
        push -0x1
        push 0x1001f3eb
        push eax
        mov dword ptr fs:[0], esp
        push ebx
        push esi
        mov esi, dword ptr [esp+0x18]
        test esi, esi
        push edi
        mov ebx, ecx
        jz short L_c5
        cmp word ptr [esi], 0x0
        jz short L_c5
        push esi
        lea ecx, [ebx+0x4]
        call FUN_10004150
        test eax, eax
        jnz short L_809
L_c5:
        push 0x1c
        call FUN_1001ee16
        add esp, 0x4
        mov dword ptr [esp+0x1c], eax
        test eax, eax
        mov dword ptr [esp+0x14], 0x0
        jz short L_ea
        mov ecx, eax
        call FUN_10003860
        mov edi, eax
        jmp short L_ec
L_ea:
        xor edi, edi
L_ec:
        test esi, esi
        mov dword ptr [esp+0x14], 0xffffffff
        jnz short L_fd
        mov esi, 0x100274ec
L_fd:
        push edi
        push esi
        lea ecx, [ebx+0x4]
        call FUN_100041d0
        mov eax, edi
L_809:
        mov ecx, dword ptr [esp+0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret 0x4
    }
}
