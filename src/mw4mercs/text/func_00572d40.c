/* FUN_00572d40 — 661 bytes */

/* ---- external data symbols ---- */
extern int   DAT_00805918;   /* 0x00805918 */
extern int   DAT_00805908;   /* 0x00805908 */
extern int   DAT_0080592c;   /* 0x0080592C */
extern int   DAT_00805928;   /* 0x00805928 */
extern char  DAT_007dde2c;   /* 0x007DDE2C — assert enable flag */
extern int   DAT_007dab44;   /* 0x007DAB44 */
extern int   DAT_007dab40;   /* 0x007DAB40 */
extern int   DAT_007f211c;   /* 0x007F211C */
extern int   DAT_007f23d8;   /* 0x007F23D8 */
extern int   DAT_007f1f70;   /* 0x007F1F70 */
extern float DAT_0078096c;   /* 0x0078096C */
extern float DAT_00779d44;   /* 0x00779D44 */
extern int   DAT_007f23b0;   /* 0x007F23B0 */
extern int   DAT_0080d9b0;   /* 0x0080D9B0 */

/* ---- external functions ---- */
extern void __cdecl FUN_0064db40(void);
extern void *__cdecl FUN_005666d0(const char *);
extern int  __cdecl FUN_006fabf0(const char *);
extern int  __cdecl FUN_004fcb30(void);
extern char __cdecl FUN_00415230(void);
extern int  __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_005c1990(void);
extern void __cdecl FUN_00563060(void);

__declspec(naked) unsigned int __stdcall FUN_00572d40(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        push    ebx
        push    esi
        inc     eax
        push    edi
        mov     dword ptr [DAT_00805908], ecx
        mov     dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [DAT_0080592c]
        mov     esi, [eax]
        sub     eax, 4
        mov     dword ptr [DAT_0080592c], eax
        mov     eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     dword ptr [DAT_00805908], edx
        mov     dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [DAT_0080592c]
        mov     ecx, [eax]
        sub     eax, 4
        mov     dword ptr [DAT_0080592c], eax
        mov     eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     [ebp - 4], ecx
        mov     dword ptr [DAT_00805908], edx
        mov     dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [DAT_0080592c]
        mov     edi, [eax]
        sub     eax, 4
        mov     dword ptr [DAT_0080592c], eax
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     dword ptr [DAT_00805908], ecx
        mov     dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [DAT_0080592c]
        mov     ecx, [eax]
        sub     eax, 4
        mov     dword ptr [DAT_0080592c], eax
        mov     eax, dword ptr [DAT_00805918]
        cmp     ecx, 1
        movsx   ecx, byte ptr [eax]
        setz    dl
        inc     eax
        mov     [ebp - 0xC], dl
        mov     dword ptr [DAT_00805908], ecx
        mov     dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [DAT_0080592c]
        mov     ecx, [eax]
        sub     eax, 4
        cmp     ecx, 1
        mov     dword ptr [DAT_0080592c], eax
        mov     al, byte ptr [DAT_007dde2c]
        setz    dl
        test    al, al
        mov     [ebp - 8], dl
        jz      skip_assert

        cmp     esi, -1
        jnz     skip_assert
        push    0x77FC40
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      skip_assert
        int     3

skip_assert:
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     eax, [eax]
        xor     eax, ecx
        mov     ecx, [eax + 0x10]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     ecx, eax
        mov     al, byte ptr [DAT_007dde2c]
        test    al, al
        mov     [ebp - 0x10], ecx
        jz      label_0x572f12

        mov     eax, dword ptr [DAT_007f211c]
        mov     ecx, [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     assert2_done
        push    0x780A84
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      assert2_done
        int     3

assert2_done:
        mov     al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      label_0x572f12

        mov     eax, dword ptr [DAT_007f23d8]
        mov     ecx, dword ptr [DAT_007f1f70]
        mov     ecx, [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     assert3_done
        push    0x780A5C
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      assert3_done
        int     3

assert3_done:
        mov     al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      label_0x572f12

        mov     ecx, dword ptr [DAT_007f1f70]
        mov     al, [ecx + 0x2F9]
        test    al, al
        jz      label_0x572f12

        push    0x780A34
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      label_0x572f12
        int     3

label_0x572f12:
        fild    dword ptr [ebp - 4]
        fmul    dword ptr [DAT_0078096c]
        fmul    dword ptr [DAT_00779d44]
        call    FUN_0075db4a
        mov     edx, dword ptr [DAT_007f1f70]
        mov     ecx, [edx + 4]
        mov     ebx, eax
        mov     eax, dword ptr [DAT_007f23b0]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      skip_vcall

        mov     esi, dword ptr [DAT_007f1f70]
        mov     al, [esi + 0x51C]
        test    al, al
        jz      skip_vcall
        mov     eax, [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x104]
        test    al, al
        jz      skip_vcall
        mov     ecx, esi
        call    FUN_005c1990

skip_vcall:
        mov     eax, [ebp - 8]
        mov     ecx, dword ptr [DAT_007f1f70]
        mov     edx, [ecx]
        push    eax
        mov     eax, [ebp - 0xC]
        push    eax
        mov     eax, [ebp - 0x10]
        push    edi
        push    ebx
        push    eax
        call    dword ptr [edx + 0x1A0]
        mov     esi, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [DAT_00805928]
        add     esi, 4
        add     ecx, 0xA000
        cmp     esi, ecx
        mov     bl, al
        mov     dword ptr [DAT_0080592c], esi
        jc      no_overflow
        push    0
        call    FUN_00563060
        add     esp, 4

no_overflow:
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        xor     edx, edx
        test    bl, bl
        setnz   dl
        pop     edi
        inc     eax
        mov     dword ptr [DAT_00805918], eax
        mov     eax, dword ptr [DAT_0080d9b0]
        mov     dword ptr [DAT_00805908], ecx
        mov     [esi], edx
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
