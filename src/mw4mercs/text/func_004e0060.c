/* func_004e0060 - FUN_004e0060 (98 B) - __thiscall (ECX=this, RET 0x10)
 * Constructor that allocates a buffer sized to a count and copies the
 * source data (dword + byte remainder) into it.
 */
extern void *__cdecl FUN_00415180(void);
extern void *__cdecl FUN_004084d0(unsigned int);

__declspec(naked) void func_004e0060(void)
{
    __asm {
        mov eax, dword ptr [esp+0x4]   /* param_1 */
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        push eax
        call FUN_00415180
        mov esi, dword ptr [esp+0x18]  /* param_2 (source) */
        mov ebp, dword ptr [esi]       /* count */
        mov ecx, dword ptr [esp+0x1c]  /* param_3 */
        mov edx, dword ptr [esp+0x20]  /* param_4 */
        xor eax, eax
        mov dword ptr [ebx+0x8], eax
        mov dword ptr [ebx+0xc], eax
        lea eax, [ebp+0x3]
        shr eax, 0x2
        shl eax, 0x2
        mov dword ptr [ebx+0x10], ecx
        push eax
        mov dword ptr [ebx], 0x7739e8   /* vtable ptr */
        mov dword ptr [ebx+0x14], edx
        call FUN_004084d0
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 0x2
        mov dword ptr [ebx+0x18], eax
        mov edi, eax
        rep movsd
        add esp, 0x4
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 0x10
    }
}
