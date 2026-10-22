/* func_0047fe80 - MLR PMesh: read/write index buffer via stream (__thiscall, RET 0x4) */

extern void __cdecl FUN_00480a20(void);

__declspec(naked) void func_0047fe80(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0xc]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_00480a20
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ebx, [edi+0x4c]
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     LAE
        mov     eax, dword ptr [edi+0x48]
        mov     edx, dword ptr [esi]
        push    ebx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
LAE:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
