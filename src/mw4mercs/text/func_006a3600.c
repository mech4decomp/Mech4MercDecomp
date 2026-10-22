/*
 * FUN_006a3600 (283 B) — __thiscall (ECX=this), RET 4. Float-returning
 * helper that drives several vtable methods on a stream object (ESI)
 * and writes a byte flag at [this+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_799d40;   /* 0x00799d40 */
extern float g_76d064;   /* 0x0076d064 */
extern float g_76c5b0;   /* 0x0076c5b0 */
extern float g_76e1ec;   /* 0x0076e1ec */
extern float g_76d04c;   /* 0x0076d04c */

extern void __cdecl FUN_00662ee0(void *p, int);
extern void __cdecl FUN_00665670(void *p, int, int, int, int);
extern char __cdecl FUN_006a22f0(void *p);
extern void __cdecl FUN_00664b20(void *p);
extern float __cdecl FUN_006a26f0(void *p);
extern float __cdecl FUN_006a4b70(void *p, float);
extern void __cdecl FUN_006634e0(void);
extern void __cdecl FUN_00663bb0(void *p);

__declspec(naked) float FUN_006a3600(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        mov     ecx, esi
        call    dword ptr [eax + 0xD4]
        cmp     al, 0x1
        jnz     L3621
        push    0x1
        push    esi
        call    FUN_00662ee0
        add     esp, 0x8
L3621:
        push    0x0
        push    0x0
        push    0x1
        push    0x2
        push    esi
        call    FUN_00665670
        mov     edx, dword ptr [esi]
        add     esp, 0x14
        push    0x40800000
        mov     ecx, esi
        call    dword ptr [edx + 0x74]
        cmp     al, 0x1
        jnz     L3648
        mov     byte ptr [edi + 0x4], 0x0
        jmp     L364C
L3648:
        mov     byte ptr [edi + 0x4], 0x1
L364C:
        push    esi
        call    FUN_006a22f0
        add     esp, 0x4
        test    al, al
        jz      L3710
        push    esi
        call    FUN_00664b20
        add     esp, 0x4
        push    esi
        mov     ecx, edi
        call    FUN_006a26f0
        fcomp   dword ptr [g_799d40]
        fnstsw  ax
        test    ah, 0x1
        jnz     L368A
        fld     dword ptr [g_76d064]
        mov     byte ptr [edi + 0x4], 0x0
        pop     edi
        pop     esi
        ret     4
L368A:
        mov     eax, dword ptr [edi + 0x1C]
        lea     ecx, [edi + 0x1C]
        push    esi
        call    dword ptr [eax]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L36AF
        fld     dword ptr [g_76d064]
        mov     byte ptr [edi + 0x4], 0x0
        pop     edi
        pop     esi
        ret     4
L36AF:
        mov     edx, dword ptr [esi]
        push    0x1
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx + 0x2C]
        fmul    dword ptr [g_76e1ec]
        fst     dword ptr [esp + 0xC]
        fcomp   dword ptr [g_76d04c]
        fnstsw  ax
        test    ah, 0x1
        jz      L36D9
        mov     dword ptr [esp + 0xC], 0x43480000
L36D9:
        mov     eax, dword ptr [esp + 0xC]
        push    eax
        push    esi
        call    FUN_006a4b70
        fcomp   dword ptr [g_799d40]
        add     esp, 0x8
        push    esi
        fnstsw  ax
        test    ah, 0x1
        jnz     L3708
        call    FUN_006634e0
        fld     dword ptr [g_76d064]
        add     esp, 0x4
        pop     edi
        pop     esi
        ret     4
L3708:
        call    FUN_00663bb0
        add     esp, 0x4
L3710:
        fld     dword ptr [g_76d064]
        pop     edi
        pop     esi
        ret     4
    }
}
