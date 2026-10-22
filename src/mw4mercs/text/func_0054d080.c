/*
 * FUN_0054d080 (916 B) — __fastcall method on a large object.
 * ECX = this pointer, double param on stack (RET 0x8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0054d080(void)
{
    

extern int DAT_0076c5b0;
extern void __cdecl FUN_10054d016(void);
extern void __cdecl FUN_10054cf2e(void);
extern int DAT_0076d598;
extern int DAT_0076d064;
extern int DAT_0076d070;
extern int DAT_00773954;
extern int DAT_00773950;
extern int DAT_0077394c;
extern int DAT_00773948;
__asm {
sub     esp, 0x0C
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx

        mov     eax, dword ptr [esi + 0x398]
        mov     dword ptr [esp + 0x10], eax
        fld     dword ptr [esp + 0x10]
        mov     ebp, 0xBF800000
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     L_0054D11C

        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call FUN_10054d016

        test    al, al
        jz      L_0054D11C

        cmp     dword ptr [esi + 0x3A4], ebp
        jnz     L_0054D0CE

        mov     edx, dword ptr [esi + 0x398]
        mov     dword ptr [esi + 0x3A4], edx
        jmp     L_0054D11C

L_0054D0CE:
        mov     eax, dword ptr [esi + 0x398]
        push    eax
        mov     ecx, esi
        call FUN_10054cf2e

        fcom dword ptr [DAT_0076d598]
        fst     dword ptr [esi + 0x2D4]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D0F9

        fstp    st(0)
        mov     dword ptr [esi + 0x2D4], ebp
        jmp     L_0054D110

L_0054D0F9:
        fcomp dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D110
        mov     dword ptr [esi + 0x2D4], 0x3F800000

L_0054D110:
        mov     ecx, dword ptr [esi + 0x398]
        mov     dword ptr [esi + 0x3A4], ecx

L_0054D11C:
        mov     eax, dword ptr [esi + 0x180]
        cmp     eax, 1
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x0C], 0
        mov     dword ptr [esp + 0x10], 0
        jnz     L_0054D14B

        mov     edx, dword ptr [esi + 0x38C]
        mov     dword ptr [esp + 0x0C], edx
        jmp     L_0054D15A

L_0054D14B:
        cmp     eax, 2
        jnz     L_0054D15A
        mov     eax, dword ptr [esi + 0x38C]
        mov     dword ptr [esp + 0x10], eax

L_0054D15A:
        mov     eax, dword ptr [esi + 0x184]
        cmp     eax, 1
        jnz     L_0054D175

        fld     dword ptr [esp + 0x0C]
        fadd    dword ptr [esi + 0x394]
        fstp    dword ptr [esp + 0x0C]
        jmp     L_0054D188

L_0054D175:
        cmp     eax, 2
        jnz     L_0054D188
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x394]
        fstp    dword ptr [esp + 0x10]

L_0054D188:
        fld     dword ptr [esp + 0x0C]
        xor     ebx, ebx
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_0054D20C

        mov     ecx, dword ptr [esi + 0x384]
        cmp     byte ptr [ecx + 0x2F8], bl
        jnz     L_0054D20C

        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0xC0]
        test    al, al
        jnz     L_0054D20C

        fld     dword ptr [esp + 0x0C]
        fchs
        fcom dword ptr [DAT_0076d598]
        fst     dword ptr [esi + 0x2D8]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D1D8

        fstp    st(0)
        mov     dword ptr [esi + 0x2D8], ebp
        jmp     L_0054D1EF

L_0054D1D8:
        fcomp dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D1EF
        mov     dword ptr [esi + 0x2D8], 0x3F800000

L_0054D1EF:
        fld     dword ptr [esi + 0x2D8]
        fabs
        fcomp dword ptr [DAT_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D20C
        mov     dword ptr [esp + 0x14], 0x3DCCCCCD

L_0054D20C:
        fld     dword ptr [esp + 0x10]
        fabs
        fcomp   dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D239

        mov     eax, dword ptr [esi + 0x384]
        cmp     byte ptr [eax + 0x2F8], bl
        jnz     L_0054D239

        fld     dword ptr [esp + 0x10]
        fchs
        fstp    dword ptr [esi + 0x2E0]
        jmp     L_0054D23F

L_0054D239:
        mov     dword ptr [esi + 0x2E0], ebx

L_0054D23F:
        mov     ecx, dword ptr [esi + 0x384]
        cmp     byte ptr [ecx + 0x2F8], bl
        jnz     L_0054D25B
        fld     dword ptr [esi + 0x390]
        fchs
        fstp    dword ptr [esi + 0x2DC]

L_0054D25B:
        fld     dword ptr [esi + 0x39C]
        fcomp   dword ptr [esi + 0x3A0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_0054D40B

        cmp     dword ptr [esi + 0x39C], ebp
        jnz     L_0054D297

L_0054D27A:
        mov     dword ptr [esi + 0x414], ebx
        mov     dword ptr [esi + 0x410], ebx
        mov     dword ptr [esi + 0x40C], ebx
        mov     dword ptr [esi + 0x408], ebx
        jmp     L_0054D32B

L_0054D297:
        fld     dword ptr [esi + 0x39C]
        fcomp dword ptr [DAT_00773954]
        fnstsw  ax
        test    ah, 0x41
        jz      L_0054D325
        fld     dword ptr [esi + 0x39C]
        fcomp dword ptr [DAT_00773950]
        fnstsw  ax
        test    ah, 1
        jnz     L_0054D325
        fld     dword ptr [esi + 0x39C]
        fcomp dword ptr [DAT_0077394c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_0054D2D8
        inc     dword ptr [esi + 0x40C]
        jmp     L_0054D32B

L_0054D2D8:
        fld     dword ptr [esi + 0x39C]
        fcomp dword ptr [DAT_0077394c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D306
        fld     dword ptr [esi + 0x39C]
        fcomp dword ptr [DAT_00773948]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D306
        inc     dword ptr [esi + 0x410]
        jmp     L_0054D32B

L_0054D306:
        fld     dword ptr [esi + 0x39C]
        fcomp dword ptr [DAT_00773948]
        fnstsw  ax
        test    ah, 1
        jnz     L_0054D27A
        inc     dword ptr [esi + 0x408]
        jmp     L_0054D32B

L_0054D325:
        inc     dword ptr [esi + 0x414]

L_0054D32B:
        cmp     dword ptr [esi + 0x3A0], ebp
        jz      L_0054D3C7
        fld     dword ptr [esi + 0x3A0]
        fcomp dword ptr [DAT_00773954]
        fnstsw  ax
        test    ah, 0x41
        jz      L_0054D3C1
        fld     dword ptr [esi + 0x3A0]
        fcomp dword ptr [DAT_00773950]
        fnstsw  ax
        test    ah, 1
        jnz     L_0054D3C1
        fld     dword ptr [esi + 0x3A0]
        fcomp dword ptr [DAT_0077394c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_0054D378
        dec     dword ptr [esi + 0x40C]
        jmp     L_0054D3C7

L_0054D378:
        fld     dword ptr [esi + 0x3A0]
        fcomp dword ptr [DAT_0077394c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D3A6
        fld     dword ptr [esi + 0x3A0]
        fcomp dword ptr [DAT_00773948]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D3A6
        dec     dword ptr [esi + 0x410]
        jmp     L_0054D3C7

L_0054D3A6:
        fld     dword ptr [esi + 0x3A0]
        fcomp dword ptr [DAT_00773948]
        fnstsw  ax
        test    ah, 1
        jnz     L_0054D3C7
        dec     dword ptr [esi + 0x408]
        jmp     L_0054D3C7

L_0054D3C1:
        dec     dword ptr [esi + 0x414]

L_0054D3C7:
        cmp     dword ptr [esi + 0x408], ebx
        mov     edx, dword ptr [esi + 0x39C]
        mov     dword ptr [esi + 0x3A0], edx
        jge     L_0054D3E1
        mov     dword ptr [esi + 0x408], ebx

L_0054D3E1:
        cmp     dword ptr [esi + 0x410], ebx
        jge     L_0054D3EF
        mov     dword ptr [esi + 0x410], ebx

L_0054D3EF:
        cmp     dword ptr [esi + 0x40C], ebx
        jge     L_0054D3FD
        mov     dword ptr [esi + 0x40C], ebx

L_0054D3FD:
        cmp     dword ptr [esi + 0x414], ebx
        jge     L_0054D40B
        mov     dword ptr [esi + 0x414], ebx

L_0054D40B:
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x0C
        ret     0x8
    }


}
