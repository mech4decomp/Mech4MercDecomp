/*
 * FUN_0045dae0 (156 B) — MLR_I_L_DeT_PMesh __thiscall constructor.
 * Sets vtable 0x76ed48, initializes lightmap buffers, and (for
 * version <= 2) fills them via virtual calls on the stream object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007d9910;
extern int g_76ed48;
extern char g_76e300[];
extern void __cdecl FUN_004617e0(int, int, int);
extern int __cdecl FUN_006fab90(int);

__declspec(naked) void FUN_0045dae0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [g_007d9910]
        push    ebx
        mov     ebx, dword ptr [ebp+0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp+0xc]
        push    ebx
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004617e0
        xor     eax, eax
        cmp     ebx, eax
        mov     dword ptr [esi+0xa8], eax
        mov     dword ptr [esi+0xac], eax
        mov     dword ptr [esi], offset g_76ed48
        jle     L1
        cmp     ebx, 0x2
        jg      L1
        push    offset g_76e300
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L2
        int     3
        jmp     L2
L1:
        mov     edx, dword ptr [edi]
        push    0x4
        lea     ebx, [esi+0xac]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     L3
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax+0x4]
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi+0xa8], eax
        lea     eax, [ebx+ebx*2]
        shl     eax, 0x2
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x18]
        jmp     L2
L3:
        mov     dword ptr [esi+0xa8], 0x0
L2:
        lea     ecx, [esi+0xa0]
        pop     edi
        mov     dword ptr [esi+0xb0], ecx
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
