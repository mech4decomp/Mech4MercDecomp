/* FUN_00572450 — 873 bytes */

/* ---- external data symbols ---- */
extern int   DAT_00805918;   /* 0x00805918 */
extern int   DAT_00805908;   /* 0x00805908 */
extern int   DAT_0080592c;   /* 0x0080592C */
extern int   DAT_00805928;   /* 0x00805928 */
extern char  DAT_007dde2c;   /* 0x007DDE2C — assert enable flag */
extern int   DAT_007dab44;   /* 0x007DAB44 */
extern int   DAT_007dab40;   /* 0x007DAB40 */
extern int   DAT_007f268c;   /* 0x007F268C */
extern int   DAT_007f23d8;   /* 0x007F23D8 */
extern float DAT_0078096c;   /* 0x0078096C */
extern float DAT_00779d44;   /* 0x00779D44 */
extern int   DAT_0080d9b0;   /* 0x0080D9B0 */

/* ---- external functions ---- */
extern void __cdecl FUN_0064db40(void);
extern char __cdecl FUN_00566bf0(void);
extern void *__cdecl FUN_005666d0(const char *);
extern int  __cdecl FUN_006fabf0(const char *);
extern int  __cdecl FUN_004fcb30(void);
extern int  __cdecl FUN_00566c30(void);
extern void __cdecl FUN_005810a0(void);
extern int  __cdecl FUN_00566c80(void);
extern char __cdecl FUN_0064e600(void);
extern int  __cdecl FUN_0064e540(void);
extern int  __cdecl FUN_0064e100(void);
extern char __cdecl FUN_00415230(void);
extern void __cdecl FUN_00581330(void);
extern void __cdecl FUN_00581210(void);
extern int  __cdecl FUN_0075db4a(void);
extern char __cdecl FUN_00659ef0(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_00580640(void);

__declspec(naked) unsigned int __stdcall FUN_00572450(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x28
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
        mov     edx, [eax]
        sub     eax, 4
        mov     dword ptr [DAT_0080592c], eax
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     [ebp - 0x1C], edx
        mov     dword ptr [DAT_00805908], ecx
        mov     dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [DAT_0080592c]
        mov     edx, [eax]
        sub     eax, 4
        mov     dword ptr [DAT_0080592c], eax
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     [ebp - 0x18], edx
        mov     dword ptr [DAT_00805908], ecx
        mov     dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [DAT_0080592c]
        mov     edx, [eax]
        sub     eax, 4
        mov     dword ptr [DAT_0080592c], eax
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     [ebp - 0x14], edx
        mov     dword ptr [DAT_00805908], ecx
        mov     dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [DAT_0080592c]
        mov     edx, [eax]
        sub     eax, 4
        mov     dword ptr [DAT_0080592c], eax
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     [ebp - 0x10], edx
        mov     dword ptr [DAT_00805908], ecx
        mov     dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [DAT_0080592c]
        mov     ecx, [eax]
        sub     eax, 4
        cmp     ecx, 1
        setz    dl
        mov     dword ptr [DAT_0080592c], eax
        mov     [ebp - 0xC], dl
        mov     al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      skip_assert1

        push    esi
        call    FUN_00566bf0
        add     esp, 4
        test    al, al
        jnz     assert1_done
        push    0x780998
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
        jz      skip_assert1

        cmp     edi, -1
        jnz     skip_assert1
        push    0x77FC40
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      skip_assert1
        int     3

skip_assert1:
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        mov     eax, dword ptr [DAT_007dab40]
        xor     eax, edx
        mov     ecx, [eax + 0x10]
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        xor     eax, eax
        push    esi
        mov     [ebp - 0x28], eax
        mov     [ebp - 0x24], eax
        mov     [ebp - 0x20], eax
        call    FUN_00566c30
        mov     esi, eax
        add     esp, 4
        test    esi, 0xF00000
        jz      loop_init

        lea     edx, [ebp - 0x28]
        push    edx
        add     esi, 0xFF100000
        push    esi
        call    FUN_005810a0
        add     esp, 8
        jmp     label_0x57271b

loop_init:
        call    FUN_00566c80
        mov     ebx, eax
        push    esi
        mov     ecx, ebx
        call    FUN_0064e600
        test    al, al
        jz      label_0x57271b

        push    esi
        mov     ecx, ebx
        call    FUN_0064e540
        mov     esi, eax
        mov     ecx, esi
        mov     [ebp - 8], esi
        call    FUN_0064e100
        mov     ebx, [eax]
        mov     ecx, esi
        call    FUN_0064e100
        cmp     ebx, [eax + 4]
        jz      label_0x57271b

loop_top:
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        mov     eax, dword ptr [DAT_007dab40]
        xor     eax, edx
        mov     edx, [ebx]
        mov     ecx, [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      loop_next

        mov     eax, [esi + 0x10]
        shr     eax, 0x13
        test    al, 1
        jnz     loop_next

        mov     eax, dword ptr [DAT_007f268c]
        mov     ecx, [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     loop_next

        mov     esi, [esi + 0x2FC]
        test    esi, esi
        jz      loop_next

        mov     eax, dword ptr [DAT_007f23d8]
        mov     ecx, [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     loop_next

        mov     al, [esi + 0x2F9]
        test    al, al
        jnz     loop_next

        mov     eax, [ebp - 0x24]
        cmp     eax, [ebp - 0x20]
        mov     [ebp - 4], esi
        jz      grow_array

        lea     ecx, [ebp - 4]
        push    ecx
        push    eax
        call    FUN_00581330
        mov     eax, [ebp - 0x24]
        add     esp, 8
        add     eax, 4
        mov     [ebp - 0x24], eax
        jmp     loop_next

grow_array:
        push    1
        lea     edx, [ebp - 4]
        push    edx
        push    eax
        lea     ecx, [ebp - 0x28]
        call    FUN_00581210

loop_next:
        mov     ecx, [ebp - 8]
        add     ebx, 4
        call    FUN_0064e100
        cmp     ebx, [eax + 4]
        jnz     loop_top

        /* 0x57271b: */
label_0x57271b:
        fild    dword ptr [ebp - 0x1C]
        mov     eax, [ebp - 0xC]
        mov     ecx, [ebp - 0x10]
        mov     edx, [ebp - 0x14]
        push    eax
        mov     eax, [ebp - 0x18]
        fmul    dword ptr [DAT_0078096c]
        push    ecx
        push    edx
        fmul    dword ptr [DAT_00779d44]
        push    eax
        call    FUN_0075db4a
        push    eax
        lea     ecx, [ebp - 0x28]
        push    edi
        push    ecx
        call    FUN_00659ef0
        mov     esi, dword ptr [DAT_0080592c]
        mov     edx, dword ptr [DAT_00805928]
        add     esi, 4
        add     edx, 0xA000
        add     esp, 0x1C
        cmp     esi, edx
        mov     bl, al
        mov     dword ptr [DAT_0080592c], esi
        jc      no_overflow
        push    0
        call    FUN_00563060
        add     esp, 4

no_overflow:
        xor     eax, eax
        test    bl, bl
        setnz   al
        mov     [esi], eax
        mov     eax, [ebp - 0x28]
        mov     ecx, [ebp - 0x20]
        mov     esi, dword ptr [DAT_0080d9b0]
        sub     ecx, eax
        sar     ecx, 2
        push    ecx
        push    eax
        call    FUN_00580640
        mov     eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        add     esp, 8
        inc     eax
        pop     edi
        mov     dword ptr [DAT_00805918], eax
        mov     eax, esi
        pop     esi
        mov     dword ptr [DAT_00805908], edx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
