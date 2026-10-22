/*
 * FUN_007477F0 (265 B @ 0x7477f0) - __stdcall, RET 8. Copies a 32-byte entry
 * from a global table (indexed by arg), builds a descriptor on the stack,
 * calls FUN_00735230, allocates a node, and links it into a global list.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00735230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00735710(void);
extern int  g_0087c2a0;
extern int  g_0085a230;
extern char g_0087dd0a;
extern int  g_008b79e4;
extern char g_8b7b18[];

__declspec(naked) void FUN_007477F0(void)
{
    __asm {
        sub     esp, 0x80
        push    ebx
        push    esi
        push    edi
        xor     eax, eax
        mov     ecx, 0x1f
        lea     edi, [esp + 0x10]
        rep     stosd
        mov     eax, dword ptr [esp + 0x90]
        mov     esi, eax
        shl     esi, 5
        sub     esi, eax
        mov     eax, dword ptr [g_0087c2a0]
        shl     esi, 5
        add     esi, OFFSET g_8b7b18
        mov     ecx, 8
        lea     edi, [esp + 0x58]
        rep     movsd
        mov     ecx, eax
        xor     bl, bl
        neg     ecx
        sbb     ecx, ecx
        and     ecx, 0x20000
        or      ecx, 0x1007
        mov     edx, eax
        neg     edx
        sbb     edx, edx
        and     edx, 0x400008
        mov     dword ptr [esp + 0x14], ecx
        xor     ecx, ecx
        or      edx, 0x10005000
        test    eax, eax
        mov     eax, dword ptr [esp + 0x94]
        setne   cl
        push    0
        mov     dword ptr [esp + 0x7c], edx
        lea     edx, [esp + 0x10]
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x20], eax
        push    edx
        lea     eax, [esp + 0x18]
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, dword ptr [g_0085a230]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x20], 0x7c
        mov     byte ptr [g_0087dd0a], 1
        call    FUN_00735230
        test    eax, eax
        mov     byte ptr [g_0087dd0a], bl
        jge     L_7478a8
        mov     bl, 1
L_7478a8:
        push    0
        push    0x84
        call    FUN_006f3c80
        mov     esi, eax
        lea     eax, [esi + 4]
        mov     dword ptr [esi], 0
        mov     dword ptr [eax], 0x7c
        mov     edx, dword ptr [esp + 0xc]
        push    eax
        mov     dword ptr [esi + 0x80], edx
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_00735710
        mov     eax, dword ptr [g_008b79e4]
        test    eax, eax
        je      L_7478e5
        mov     dword ptr [esi], eax
L_7478e5:
        pop     edi
        mov     dword ptr [g_008b79e4], esi
        pop     esi
        mov     al, bl
        pop     ebx
        add     esp, 0x80
        ret     8
    }
}
