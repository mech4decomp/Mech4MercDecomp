/*
 * FUN_006765f0 (716 B) — __thiscall (ECX=this) with one float* stack param.
 * Clamps a float rect against DAT_0080da60/5c/54/58 bounds, runs a series of
 * debug asserts (guarded by DAT_007dde2c), then inserts into a linked list.
 *
 * __thiscall, RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007dde2c;      /* debug assert flag */
extern char g_76b768[];      /* assert message string */
extern int g_007dc690;
extern int g_007f25b8;
extern int g_007f24d8;
extern int g_007f25c0;
extern int g_007f2568;
extern float g_0080da60;
extern float g_0080da5c;
extern float g_0080da54;
extern float g_0076d064;
extern float g_0080da58;
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_00415230(void);

__declspec(naked) void __cdecl FUN_006765f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     al, byte ptr [g_007dde2c]
        test    al, al
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov     ebx, ecx
        jz      L_766de
        test    esi, esi
        jnz     L_7661e
        push    offset g_76b768
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_7661e
        int     3
    L_7661e:
        mov     al, byte ptr [g_007dde2c]
        test    al, al
        jz      L_766de
        mov     eax, dword ptr [esi + 0x34]
        test    eax, eax
        jnz     L_76644
        push    offset g_76b768
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_76644
        int     3
    L_76644:
        mov     al, byte ptr [g_007dde2c]
        test    al, al
        jz      L_766de
        mov     eax, dword ptr [g_007dc690]
        push    eax
        mov     eax, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        test    al, al
        jnz     L_76678
        push    offset g_76b768
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_76678
        int     3
    L_76678:
        mov     al, byte ptr [g_007dde2c]
        test    al, al
        jz      L_766de
        mov     eax, dword ptr [g_007f25b8]
        mov     edi, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_766de
        mov     eax, dword ptr [g_007f24d8]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_766de
        mov     eax, dword ptr [g_007f25c0]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_766de
        mov     eax, dword ptr [g_007f2568]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_766de
        push    offset g_76b768
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_766de
        int     3
    L_766de:
        fld     dword ptr [esi]
        fcomp   dword ptr [g_0080da60]
        fnstsw  ax
        test    ah, 0x1
        jz      L_766f5
        mov     ecx, dword ptr [g_0080da60]
        mov     dword ptr [esi], ecx
    L_766f5:
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [g_0080da5c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_7670e
        mov     edx, dword ptr [g_0080da5c]
        mov     dword ptr [esi + 0x8], edx
    L_7670e:
        fld     dword ptr [esi + 0x4]
        fcomp   dword ptr [g_0080da60]
        fnstsw  ax
        test    ah, 0x1
        jz      L_76726
        mov     eax, dword ptr [g_0080da60]
        mov     dword ptr [esi + 0x4], eax
    L_76726:
        fld     dword ptr [esi + 0xc]
        fcomp   dword ptr [g_0080da5c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_7673f
        mov     ecx, dword ptr [g_0080da5c]
        mov     dword ptr [esi + 0xc], ecx
    L_7673f:
        fld     dword ptr [g_0080da54]
        fsub    dword ptr [g_0076d064]
        fstp    dword ptr [ebp + 0x8]
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [ebp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_76761
        mov     edx, dword ptr [ebp + 0x8]
        mov     dword ptr [esi + 0x8], edx
    L_76761:
        fld     dword ptr [g_0080da58]
        fsub    dword ptr [g_0076d064]
        fcom    dword ptr [esi]
        fnstsw  ax
        test    ah, 0x41
        jz      L_76778
        fst     dword ptr [esi]
    L_76778:
        fld     dword ptr [esi + 0xc]
        fcomp   dword ptr [ebp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_7678b
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [esi + 0xc], eax
    L_7678b:
        fcom    dword ptr [esi + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jz      L_7679a
        fstp    dword ptr [esi + 0x4]
        jmp     L_7679c
    L_7679a:
        fstp    st(0)
    L_7679c:
        mov     al, byte ptr [g_007dde2c]
        test    al, al
        jz      L_767eb
        fld     dword ptr [esi]
        fcomp   dword ptr [esi + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_767c3
        push    offset g_76b768
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_767c3
        int     3
    L_767c3:
        mov     al, byte ptr [g_007dde2c]
        test    al, al
        jz      L_767eb
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [esi + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_767eb
        push    offset g_76b768
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_767eb
        int     3
    L_767eb:
        mov     edx, dword ptr [ebx + 0xc]
        mov     ecx, dword ptr [esi + 0x10]
        sub     ecx, edx
        mov     edx, dword ptr [ebx + 0x10]
        cmp     ecx, edx
        jge     L_768b5
        mov     eax, dword ptr [ebx + 0x8]
        lea     edi, [eax + ecx]
        cmp     edi, edx
        jl      L_7680e
        sub     eax, edx
        add     eax, ecx
        mov     edi, eax
    L_7680e:
        cmp     edi, -0x1
        jz      L_768b5
        mov     al, byte ptr [g_007dde2c]
        test    al, al
        jz      L_7689a
        test    edi, edi
        jge     L_76836
        push    offset g_76b768
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_76836
        int     3
    L_76836:
        mov     al, byte ptr [g_007dde2c]
        test    al, al
        jz      L_7689a
        cmp     edi, dword ptr [ebx + 0x10]
        jl      L_76856
        push    offset g_76b768
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_76856
        int     3
    L_76856:
        mov     al, byte ptr [g_007dde2c]
        test    al, al
        jz      L_7689a
        mov     eax, dword ptr [esi + 0x30]
        test    eax, eax
        jz      L_76878
        push    offset g_76b768
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_76878
        int     3
    L_76878:
        mov     al, byte ptr [g_007dde2c]
        test    al, al
        jz      L_7689a
        mov     eax, dword ptr [esi + 0x2c]
        test    eax, eax
        jz      L_7689a
        push    offset g_76b768
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_7689a
        int     3
    L_7689a:
        mov     ecx, dword ptr [ebx]
        mov     eax, dword ptr [ecx + edi*4]
        test    eax, eax
        lea     ecx, [ecx + edi*4]
        mov     dword ptr [esi + 0x30], 0x0
        mov     dword ptr [esi + 0x2c], eax
        jz      L_768b3
        mov     dword ptr [eax + 0x30], esi
    L_768b3:
        mov     dword ptr [ecx], esi
    L_768b5:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     4
    }
}
