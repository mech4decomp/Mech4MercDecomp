/*
 * FUN_004a8810 (170 B) — MLR ShardCloud constructor (__thiscall, RET 0x8).
 * Builds a CStringT base via FUN_004a9720, sets vtable 0x770420, allocates
 * a 0xa0-byte sub-object (FUN_00485520), and computes two pointer offsets
 * into the object's array region before invoking a virtual method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da994;
extern int g_007b9598;
extern void __cdecl FUN_004a9720(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00485520(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a8810(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [g_007da994]
        push    ebx
        push    ecx
        mov     ecx, esi
        call    FUN_004a9720
        mov     edx, dword ptr [g_007b9598]
        push    edx
        mov     dword ptr [esi], 0x770420
        call    FUN_006f4950
        push    0xa0
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4a8862
        mov     ecx, dword ptr [ebx + 0x268]
        push    ecx
        mov     ecx, eax
        call    FUN_00485520
        mov     edi, eax
        jmp     L_4a8864
L_4a8862:
        xor     edi, edi
L_4a8864:
        mov     dword ptr [esi + 0xb0], edi
        call    FUN_006f49a0
        mov     eax, dword ptr [ebx + 0x268]
        lea     edx, [eax*8]
        sub     edx, eax
        lea     ecx, [eax + edx*4]
        mov     edx, dword ptr [esi + 0xa8]
        shl     ecx, 0x2
        lea     ebx, [edx + ecx*1]
        lea     eax, [eax + eax*8]
        lea     edx, [edx + eax*4]
        lea     eax, [edx + ecx*1]
        mov     edx, dword ptr [edi]
        push    eax
        mov     dword ptr [esi + 0xb8], eax
        push    ebx
        lea     eax, [esi + 0xa0]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi + 0xb4], ebx
        call    dword ptr [edx + 0x4]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
