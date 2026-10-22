/*
 * FUN_0056e320 (800 B) — ABL object-id / distance-within dispatcher.
 *
 * Reads object ids from a bytecode stream (DAT_00805918) and a value stack
 * (DAT_0080592c), resolves an object, and performs a distance-within test,
 * pushing a boolean result back onto the stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * NOTE: extern data/function symbols referenced by name so MSVC6 emits the
 * correct memory-deref (A1/A3/8B 0D/8B 35/8B 15/A0) and rel32 (E8) opcode
 * forms; the 4-byte address fields are relocations masked by the diff
 * harness.
 */

/* ---- external data symbols ---- */
extern int   g_805918;   /* 0x00805918 — bytecode stream pointer */
extern int   g_805908;   /* 0x00805908 — current bytecode value */
extern int   g_80592c;   /* 0x0080592c — value stack pointer */
extern int   g_805928;   /* 0x00805928 — value stack base */
extern int   g_80d964;   /* 0x0080d964 */
extern char  g_7dde2c;   /* 0x007dde2c — assert enable flag */
extern int   g_7dab44;   /* 0x007dab44 */
extern int   g_7dab40;   /* 0x007dab40 */
extern int   g_7dc690;   /* 0x007dc690 */
extern int   g_80d9b0;   /* 0x0080d9b0 */

/* ---- external functions ---- */
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064d3d0(void);
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_0056e230(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00566b90(void);
extern void __cdecl FUN_0040ca10(void);

__declspec(naked) void __cdecl func_0056E320(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x28
        mov     eax, g_805918
        movsx   ecx, byte ptr [eax + 0x1]
        inc     eax
        push    ebx
        inc     eax
        push    esi
        mov     g_805908, ecx
        mov     g_805918, eax
        call    FUN_0064db40
        mov     eax, g_80592c
        mov     esi, dword ptr [eax]
        sub     eax, 0x4
        mov     g_80592c, eax
        mov     eax, g_805918
        movsx   edx, byte ptr [eax]
        mov     ecx, dword ptr [eax + 0x1]
        inc     eax
        add     eax, 0x4
        push    2
        push    ecx
        mov     g_805908, edx
        mov     g_805918, eax
        call    FUN_0064d3d0
        push    eax
        call    FUN_0064c950
        mov     ecx, g_80592c
        mov     eax, dword ptr [ecx]
        fild    dword ptr [eax]
        sub     ecx, 0x4
        mov     g_80592c, ecx
        fstp    dword ptr [ebp - 0x10]
        fild    dword ptr [eax + 0x4]
        fstp    dword ptr [ebp - 0xc]
        fild    dword ptr [eax + 0x8]
        mov     eax, g_805918
        inc     eax
        mov     g_805918, eax
        fstp    dword ptr [ebp - 0x8]
        movsx   ecx, byte ptr [eax - 1]
        mov     g_805908, ecx
        call    FUN_0064db40
        mov     eax, g_80592c
        mov     ebx, dword ptr [eax]
        sub     eax, 0x4
        push    esi
        mov     g_80592c, eax
        call    FUN_00566bf0
        add     esp, 0x10
        cmp     al, 1
        jnz     L_56e420
        push    ebx
        lea     edx, [ebp - 0x10]
        push    edx
        push    esi
        call    FUN_00566c30
        add     esp, 0x4
        push    eax
        call    FUN_0056e230
        mov     esi, g_80592c
        mov     bl, al
        mov     eax, g_805928
        add     esi, 0x4
        add     eax, 0xa000
        add     esp, 0xc
        cmp     esi, eax
        mov     g_80592c, esi
        jc      L_56e412
        push    0
        call    FUN_00563060
        add     esp, 0x4

L_56e412:
        xor     ecx, ecx
        test    bl, bl
        setnz   cl
        mov     dword ptr [esi], ecx
        jmp     L_56e621

L_56e420:
        cmp     esi, -1
        jnz     L_56e42f
        mov     eax, g_80d964
        jmp     L_56e50d

L_56e42f:
        mov     al, g_7dde2c
        push    edi
        mov     edi, esi
        sar     edi, 0x18
        test    al, al
        jz      L_56e480
        test    edi, edi
        jge     L_56e45a
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56e45a
        int     3

L_56e45a:
        mov     al, g_7dde2c
        test    al, al
        jz      L_56e480
        cmp     edi, 0x12
        jl      L_56e480
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56e480
        int     3

L_56e480:
        mov     edx, g_7dab44
        mov     ecx, g_7dab40
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        mov     al, g_7dde2c
        test    al, al
        pop     edi
        jz      L_56e4fa
        test    esi, esi
        jnz     L_56e4c7
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56e4c7
        int     3

L_56e4c7:
        mov     al, g_7dde2c
        test    al, al
        jz      L_56e4fa
        mov     eax, g_7dc690
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_56e4fa
        push    0x77f68c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56e4fa
        int     3

L_56e4fa:
        test    esi, esi
        jnz     L_56e502
        xor     eax, eax
        jmp     L_56e50d

L_56e502:
        xor     eax, eax
        cmp     esi, -1
        setz    al
        dec     eax
        and     eax, esi

L_56e50d:
        push    eax
        call    FUN_00566b90
        add     esp, 0x4
        test    eax, eax
        jnz     L_56e54c
        mov     esi, g_80592c
        mov     eax, g_805928
        add     esi, 0x4
        add     eax, 0xa000
        mov     g_80592c, esi
        cmp     esi, eax
L_56e535:
        jc      L_56e541
        push    0
        call    FUN_00563060
        add     esp, 0x4

L_56e541:
        mov     dword ptr [esi], 0
        jmp     L_56e621

L_56e54c:
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        and     cl, 1
        cmp     cl, 1
        jnz     L_56e579
        mov     esi, g_80592c
        mov     edx, g_805928
        add     esi, 0x4
        add     edx, 0xa000
        mov     g_80592c, esi
        cmp     esi, edx
        jmp     L_56e535

L_56e579:
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        fstp    dword ptr [ebp - 0x28]
        mov     ecx, eax
        lea     edx, [ebp - 0x28]
        mov     dword ptr [ebp - 0x14], eax
        push    edx
        lea     eax, [ebp - 0x10]
        mov     dword ptr [ebp - 0x20], ecx
        push    eax
        lea     ecx, [ebp - 0x1c]
        mov     dword ptr [ebp - 0x24], 0
        mov     dword ptr [ebp - 0xc], 0
        call    FUN_0040ca10
        fld     dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x14]
        mov     ecx, ebx
        imul    ecx, ebx
        mov     dword ptr [ebp - 0x4], ecx
        fild    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x1c]
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st(0)
        fcompp
        fnstsw ax
        fstp    st(0)
        test    ah, 1
        fstp    st(0)
        jz      L_56e5ed
        mov     ebx, 1
        jmp     L_56e5ef

L_56e5ed:
        xor     ebx, ebx

L_56e5ef:
        mov     esi, g_80592c
        mov     edx, g_805928
        add     esi, 0x4
        add     edx, 0xa000
        cmp     esi, edx
        mov     g_80592c, esi
        jc      L_56e618
        push    0
        call    FUN_00563060
        add     esp, 0x4

L_56e618:
        xor     eax, eax
        test    bl, bl
        setnz   al
        mov     dword ptr [esi], eax

L_56e621:
        mov     eax, g_805918
        movsx   ecx, byte ptr [eax]
        inc     eax
        pop     esi
        mov     g_805918, eax
        mov     eax, g_80d9b0
        mov     g_805908, ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
