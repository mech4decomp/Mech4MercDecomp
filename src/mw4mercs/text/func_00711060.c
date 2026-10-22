/*
 * FUN_00711060 (294 B) — debug print of u/v float coords, selecting a
 * format string by range comparisons, then sprintf + color print.
 *
 * __cdecl, 2 float params, RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_785970;   /* 0x00785970 */
extern double g_76d970;   /* 0x0076d970 */
extern double g_7a1f70;   /* 0x007a1f70 */
extern char   g_7a1f78[]; /* 0x007a1f78 */
extern char   g_7a1f60[]; /* 0x007a1f60 */
extern char   g_7a1f50[]; /* 0x007a1f50 */
extern char   g_7a1f40[]; /* 0x007a1f40 */
extern char   g_7a1f30[]; /* 0x007a1f30 */
extern char   g_7a1f20[]; /* 0x007a1f20 */
extern void  *g_76b420;   /* 0x0076b420 sprintf */
extern void __cdecl FUN_0073d3b0(void);

__declspec(naked) void __stdcall FUN_00711060(float p1, float p2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x8c
        fld     dword ptr [ebp + 8]
        push    esi
        fst     qword ptr [esp + 8]
        fcomp   qword ptr [g_785970]
        fnstsw  ax
        test    ah, 1
        jz      L110cb
        fld     dword ptr [ebp + 8]
        fst     qword ptr [esp + 8]
        fcomp   qword ptr [g_76d970]
        fnstsw  ax
        test    ah, 0x41
        jnz     L110a6
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        push    offset g_7a1f78
        jmp     L110da
L110a6:
        fld     dword ptr [ebp + 8]
        fst     qword ptr [esp + 8]
        fcomp   qword ptr [g_7a1f70]
        fnstsw  ax
        test    ah, 0x41
        jz      L110cb
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        push    offset g_7a1f60
        jmp     L110da
L110cb:
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        push    offset g_7a1f50
L110da:
        mov     esi, dword ptr [g_76b420]
        lea     edx, [esp + 0x1c]
        push    edx
        call    esi
        add     esp, 0x10
        lea     eax, [esp + 0x10]
        push    eax
        push    0xc0c0c0
        call    FUN_0073d3b0
        fld     dword ptr [ebp + 0xc]
        fst     qword ptr [esp + 8]
        fcomp   qword ptr [g_785970]
        fnstsw  ax
        test    ah, 1
        jz      L11157
        fld     dword ptr [ebp + 0xc]
        fst     qword ptr [esp + 8]
        fcomp   qword ptr [g_76d970]
        fnstsw  ax
        test    ah, 0x41
        jnz     L11132
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        push    offset g_7a1f40
        jmp     L11166
L11132:
        fld     dword ptr [ebp + 0xc]
        fst     qword ptr [esp + 8]
        fcomp   qword ptr [g_7a1f70]
        fnstsw  ax
        test    ah, 0x41
        jz      L11157
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        push    offset g_7a1f30
        jmp     L11166
L11157:
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        push    offset g_7a1f20
L11166:
        lea     eax, [esp + 0x1c]
        push    eax
        call    esi
        add     esp, 0x10
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0xc0c0c0
        call    FUN_0073d3b0
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
