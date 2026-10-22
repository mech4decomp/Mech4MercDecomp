/* func_0047ff10 - MLR PMesh: init + zero-fill index buffer (__thiscall, RET 0x8) */

extern void __cdecl FUN_00480bd0(void);
extern int g_007da600;

__declspec(naked) void func_0047ff10(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00480bd0
        xor     eax, eax
        mov     dword ptr [esi+0x50], eax
        mov     word ptr [esi+0x54], 0xffff
        mov     word ptr [esi+0x56], ax
        mov     ecx, dword ptr [esi+0x18]
        cmp     ecx, eax
        pop     esi
        jle     L53
        mov     edx, dword ptr [g_007da600]
        push    edi
        mov     edi, dword ptr [edx]
        mov     edx, ecx
        shr     ecx, 0x2
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
        pop     edi
L53:
        ret     0x8
    }
}
