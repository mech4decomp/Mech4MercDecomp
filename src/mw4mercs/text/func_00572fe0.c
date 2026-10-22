/* FUN_00572fe0 — 464 bytes */

/* ---- external data symbols ---- */
extern int   DAT_00805918;   /* 0x00805918 */
extern int   DAT_00805908;   /* 0x00805908 */
extern int   DAT_0080592c;   /* 0x0080592C */
extern int   DAT_00805928;   /* 0x00805928 */
extern char  DAT_007dde2c;   /* 0x007DDE2C — assert enable flag */
extern int   DAT_007f23d8;   /* 0x007F23D8 */
extern int   DAT_007f1f70;   /* 0x007F1F70 */
extern float DAT_0078096c;   /* 0x0078096C */
extern float DAT_00779d44;   /* 0x00779D44 */
extern int   DAT_007f23b0;   /* 0x007F23B0 */
extern int   DAT_0080d9bc;   /* 0x0080D9BC */

/* ---- external functions ---- */
extern void __cdecl FUN_0064db40(void);
extern char __cdecl FUN_00415230(void);
extern void *__cdecl FUN_005666d0(const char *);
extern int  __cdecl FUN_006fabf0(const char *);
extern int  __cdecl FUN_005668b0(void);
extern void __cdecl FUN_00563060(void);
extern int  __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_005c1990(void);

__declspec(naked) unsigned int __stdcall FUN_00572fe0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
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
        mov     al, byte ptr [DAT_007dde2c]
        test    al, al
        mov     [ebp - 4], ecx
        jz      label_0x5730a5

        mov     eax, dword ptr [DAT_007f23d8]
        mov     ecx, dword ptr [DAT_007f1f70]
        mov     ecx, [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     assert1_done
        push    0x780AC4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      assert1_done
        int     3

assert1_done:
        mov     al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      label_0x5730a5

        mov     edx, dword ptr [DAT_007f1f70]
        mov     al, [edx + 0x2F9]
        test    al, al
        jz      label_0x5730a5

        push    0x780AA4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      label_0x5730a5
        int     3

label_0x5730a5:
        push    esi
        call    FUN_005668b0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        jnz     flee_path

        mov     esi, dword ptr [DAT_0080592c]
        mov     eax, dword ptr [DAT_00805928]
        add     esi, 4
        add     eax, 0xA000
        cmp     esi, eax
        mov     dword ptr [DAT_0080592c], esi
        jc      no_overflow1
        push    edi
        call    FUN_00563060
        add     esp, 4

no_overflow1:
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        pop     edi
        mov     dword ptr [esi], 0
        mov     dword ptr [DAT_00805918], eax
        mov     eax, dword ptr [DAT_0080d9bc]
        mov     dword ptr [DAT_00805908], ecx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

flee_path:
        fild    dword ptr [ebp - 4]
        push    ebx
        fmul    dword ptr [DAT_0078096c]
        fmul    dword ptr [DAT_00779d44]
        call    FUN_0075db4a
        mov     ecx, dword ptr [DAT_007f1f70]
        mov     ecx, [ecx + 4]
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
        mov     edx, [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x104]
        test    al, al
        jz      skip_vcall
        mov     ecx, esi
        call    FUN_005c1990

skip_vcall:
        mov     ecx, dword ptr [DAT_007f1f70]
        mov     eax, [ecx]
        push    ebx
        push    edi
        call    dword ptr [eax + 0x1A4]
        mov     esi, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [DAT_00805928]
        add     esi, 4
        add     ecx, 0xA000
        cmp     esi, ecx
        mov     edi, eax
        mov     dword ptr [DAT_0080592c], esi
        pop     ebx
        jc      no_overflow2
        push    0
        call    FUN_00563060
        add     esp, 4

no_overflow2:
        mov     eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        mov     [esi], edi
        inc     eax
        pop     edi
        mov     dword ptr [DAT_00805918], eax
        mov     eax, dword ptr [DAT_0080d9bc]
        mov     dword ptr [DAT_00805908], edx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
