/*
 * FUN_00678430 (263 B) — Effect/particle setup routine.
 *
 * __cdecl, RET 0 (one stack param at EBP+8).
 * Uses virtual calls on an object (ESI), extern globals at 0x7db0a0/0xac/0xae,
 * and several __thiscall helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501b70(void *p);
extern void __cdecl FUN_004cfbd0(int v);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_004d21c0(void);

extern int   g_7db0a0;
extern short g_7db0ac;
extern short g_7db0ae;

__declspec(naked) void __cdecl FUN_00678430(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x44
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x6c
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00501b70
        mov     edx, dword ptr [esi]
        add     esp, 4
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     edi, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [g_7db0a0]
        mov     esi, eax
        mov     eax, dword ptr [edi + 0x10]
        push    eax
        mov     dword ptr [esi], 0x6c
        call    FUN_004cfbd0
        mov     cx, word ptr [g_7db0ac]
        mov     dx, word ptr [g_7db0ae]
        push    0x1
        lea     eax, [ebp + 0x8]
        push    eax
        mov     word ptr [esi + 0x60], cx
        push    0x78d458
        mov     ecx, edi
        mov     word ptr [esi + 0x62], dx
        call    FUN_00411bf0
        mov     ecx, dword ptr [ebp + 0x8]
        push    0
        push    ecx
        lea     ecx, [ebp - 0x44]
        call    FUN_004d2000
        mov     eax, dword ptr [ebp - 0x8]
        test    eax, eax
        jz      L_6784b5
        mov     eax, dword ptr [ebp - 0x28]
        test    eax, eax
        ja      L_6784cb
L_6784b5:
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        push    0x797cd4
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        jz      L_6784cb
        int     3
L_6784cb:
        mov     ax, word ptr [ebp - 0x4]
        mov     word ptr [esi + 0x60], ax
        mov     cx, word ptr [ebp - 0x2]
        lea     eax, [esi + 0x64]
        push    0
        mov     word ptr [esi + 0x62], cx
        lea     ebx, [esi + 0x68]
        push    eax
        add     esi, 0x69
        push    0x797cc8
        mov     ecx, edi
        mov     dword ptr [eax], 0x3f800000
        mov     byte ptr [ebx], 0
        mov     byte ptr [esi], 0
        call    FUN_00411d60
        push    0
        push    ebx
        push    0x797cbc
        mov     ecx, edi
        call    FUN_00411ec0
        push    0
        push    esi
        push    0x797cac
        mov     ecx, edi
        call    FUN_00411ec0
        mov     ecx, dword ptr [g_7db0a0]
        call    FUN_004cfc90
        lea     ecx, [ebp - 0x44]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
