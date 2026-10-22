/*
 * FUN_004da670 (458 B) — MLR/Adept application core __thiscall.
 * Handles a "scorch" effect: computes a clamped scale factor, and
 * either applies it via FUN_004f1780 or spawns a scorch via
 * FUN_004f17c0. Recurses through a linked list (0xc4 chain) when the
 * primary target is absent.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007704c0;
extern float g_0076d070;
extern float g_0076d064;
extern float g_0077016c;
extern int   g_007da848;
extern int   g_007dab44;
extern int   g_007dab40;
extern char  g_007b9460[];
extern char  g_007733f8[];

extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_0041fde0(void);
extern int  __cdecl FUN_0048fac0(void);
extern void __cdecl FUN_004f17c0(void);
extern void __cdecl FUN_004f1780(void);
extern void __cdecl FUN_004da670(void);

__declspec(naked) void FUN_004da670(void)
{
    __asm {
        sub     esp, 0x48
        push    ebx
        mov     ebx, dword ptr [esp+0x50]
        mov     al, byte ptr [ebx+0x3c]
        test    al, al
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        jnz     L_830
        mov     edi, dword ptr [esi+0x10]
        mov     eax, edi
        shr     eax, 0x13
        test    al, 0x1
        jnz     L_830
        push    offset g_007b9460
        lea     ecx, [esp+0x2c]
        call    FUN_00419460
        mov     ebp, dword ptr [esi+0xd0]
        test    ebp, ebp
        jz      L_7e4
        mov     ecx, dword ptr [esi+0xd8]
        add     ecx, 0x80
        push    ecx
        lea     edx, [ebx+0x2c]
        push    edx
        lea     ecx, [esp+0x24]
        call    FUN_0041c830
        lea     eax, [esp+0x1c]
        push    eax
        lea     ecx, [esp+0x2c]
        call    FUN_0040d030
        fld     dword ptr [ebx+0x20]
        fchs
        push    0x0
        fstp    dword ptr [esp+0x14]
        push    0x1
        fld     dword ptr [ebx+0x24]
        push    0x2
        fchs
        lea     ecx, [esp+0x1c]
        fstp    dword ptr [esp+0x20]
        push    ecx
        fld     dword ptr [ebx+0x28]
        lea     ecx, [esp+0x38]
        fchs
        fstp    dword ptr [esp+0x28]
        call    FUN_0041fde0
        fld     dword ptr [ebx+0x14]
        fmul    dword ptr [g_007704c0]
        fst     dword ptr [esp+0x5c]
        fcomp   dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x1
        jz      L_72f
        mov     dword ptr [esp+0x5c], 0x3f000000
        jmp     L_748
L_72f:
        fld     dword ptr [esp+0x5c]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_748
        mov     dword ptr [esp+0x5c], 0x3f800000
L_748:
        cmp     dword ptr [esp+0x60], 0xb
        jnz     L_7c9
        mov     edx, edi
        shr     edx, 0x15
        test    dl, 0x1
        jnz     L_830
        mov     ecx, dword ptr [g_007da848]
        push    0x0
        push    offset g_007733f8
        call    FUN_0048fac0
        test    eax, eax
        jz      L_830
        fld     dword ptr [esp+0x34]
        push    eax
        fsub    dword ptr [esp+0x34]
        push    ecx
        lea     eax, [esp+0x30]
        mov     ecx, ebp
        fstp    dword ptr [esp+0x3c]
        fld     dword ptr [esp+0x4c]
        fsub    dword ptr [esp+0x48]
        fstp    dword ptr [esp+0x4c]
        fld     dword ptr [esp+0x5c]
        fsub    dword ptr [esp+0x58]
        fstp    dword ptr [esp+0x5c]
        fld     dword ptr [esp+0x64]
        fmul    dword ptr [g_0077016c]
        fstp    dword ptr [esp]
        push    eax
        call    FUN_004f17c0
        or      edi, 0x200000
        mov     dword ptr [esi+0x10], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x48
        ret     0x8
L_7c9:
        mov     ecx, dword ptr [esp+0x5c]
        push    ecx
        lea     edx, [esp+0x2c]
        push    edx
        mov     ecx, ebp
        call    FUN_004f1780
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x48
        ret     0x8
L_7e4:
        mov     ecx, dword ptr [esi+0xc4]
        test    ecx, ecx
        jz      L_830
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [eax]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx+0x1c]
        xor     eax, 0x85739531
        cmp     ecx, eax
        jz      L_830
L_803:
        mov     edx, dword ptr [ecx+0xd0]
        test    edx, edx
        jnz     L_825
        mov     ecx, dword ptr [ecx+0xc4]
        test    ecx, ecx
        __emit 0x75   /* __emit: backward jnz L_803; MSVC6 computes rel off-by-4 (75 EC vs ref 75 E8) */
        __emit 0xE8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x48
        ret     0x8
L_825:
        mov     eax, dword ptr [esp+0x60]
        push    eax
        push    ebx
        call    FUN_004da670
L_830:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x48
        ret     0x8
    }
}
