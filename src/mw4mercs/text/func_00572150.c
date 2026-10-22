/* FUN_00572150 — 764 bytes */

/* ---- external data symbols ---- */
extern int   DAT_00805918;   /* 0x00805918 */
extern int   DAT_00805908;   /* 0x00805908 */
extern int   DAT_0080592c;   /* 0x0080592C */
extern char  DAT_007dde2c;   /* 0x007DDE2C — assert enable flag */
extern int   DAT_007dab44;   /* 0x007DAB44 */
extern int   DAT_007dab40;   /* 0x007DAB40 */
extern int   DAT_007f268c;   /* 0x007F268C */
extern int   DAT_007f23d8;   /* 0x007F23D8 */
extern float DAT_0078096c;   /* 0x0078096C */
extern float DAT_00779d44;   /* 0x00779D44 */

/* ---- external functions ---- */
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064d3d0(void);
extern char __cdecl FUN_00566bf0(void);
extern void *__cdecl FUN_005666d0(const char *);
extern int  __cdecl FUN_006fabf0(const char *);
extern int  __cdecl FUN_00566c30(void);
extern void __cdecl FUN_005810a0(void);
extern int  __cdecl FUN_00566c80(void);
extern char __cdecl FUN_0064e600(void);
extern int  __cdecl FUN_0064e540(void);
extern int  __cdecl FUN_0064e100(void);
extern int  __cdecl FUN_004fcb30(void);
extern char __cdecl FUN_00415230(void);
extern void __cdecl FUN_00581330(void);
extern void __cdecl FUN_00581210(void);
extern int  __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0065a180(void);
extern void __cdecl FUN_00580640(void);

__declspec(naked) unsigned int __stdcall FUN_00572150(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x28
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        push    ebx
        inc     eax
        push    esi
        mov     dword ptr [DAT_00805908], ecx
        mov     dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [DAT_0080592c]
        mov     esi, [eax]
        sub     eax, 4
        mov     dword ptr [DAT_0080592c], eax
        mov     eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        mov     ecx, [eax + 1]
        inc     eax
        add     eax, 4
        push    2
        push    ecx
        mov     dword ptr [DAT_00805908], edx
        mov     dword ptr [DAT_00805918], eax
        call    FUN_0064d3d0
        mov     eax, dword ptr [DAT_0080592c]
        mov     ebx, [eax]
        sub     eax, 4
        mov     dword ptr [DAT_0080592c], eax
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     dword ptr [DAT_00805908], ecx
        mov     ecx, [eax]
        add     eax, 4
        push    2
        push    ecx
        mov     dword ptr [DAT_00805918], eax
        call    FUN_0064d3d0
        mov     eax, dword ptr [DAT_0080592c]
        mov     edx, [eax]
        sub     eax, 4
        mov     dword ptr [DAT_0080592c], eax
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        add     esp, 0x10
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
        mov     dword ptr [DAT_0080592c], eax
        mov     al, byte ptr [DAT_007dde2c]
        setz    dl
        test    al, al
        mov     [ebp - 0xC], dl
        jz      skip_assert

        push    esi
        call    FUN_00566bf0
        add     esp, 4
        test    al, al
        jnz     skip_assert
        push    0x780970
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      skip_assert
        int     3

skip_assert:
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

        lea     eax, [ebp - 0x28]
        push    eax
        add     esi, 0xFF100000
        push    esi
        call    FUN_005810a0
        add     esp, 8
        jmp     label_0x5723ec

loop_init:
        push    edi
        call    FUN_00566c80
        mov     edi, eax
        push    esi
        mov     ecx, edi
        call    FUN_0064e600
        test    al, al
        jz      label_0x5723eb

        push    esi
        mov     ecx, edi
        call    FUN_0064e540
        mov     esi, eax
        mov     ecx, esi
        mov     [ebp - 8], esi
        call    FUN_0064e100
        mov     edi, [eax]
        mov     ecx, esi
        call    FUN_0064e100
        cmp     edi, [eax + 4]
        jz      label_0x5723eb

loop_top:
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        mov     eax, dword ptr [DAT_007dab40]
        xor     eax, edx
        mov     edx, [edi]
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
        add     edi, 4
        call    FUN_0064e100
        cmp     edi, [eax + 4]
        jnz     loop_top

label_0x5723eb:
        pop     edi

        /* 0x5723ec: */
label_0x5723ec:
        fild    dword ptr [ebp - 0x18]
        mov     eax, [ebp - 0xC]
        mov     ecx, [ebp - 0x10]
        mov     edx, [ebp - 0x14]
        fmul    dword ptr [DAT_0078096c]
        push    eax
        push    ecx
        fmul    dword ptr [DAT_00779d44]
        push    edx
        call    FUN_0075db4a
        push    eax
        mov     eax, [ebp - 0x1C]
        push    eax
        lea     ecx, [ebp - 0x28]
        push    ebx
        push    ecx
        call    FUN_0065a180
        mov     eax, [ebp - 0x28]
        mov     edx, [ebp - 0x20]
        sub     edx, eax
        sar     edx, 2
        push    edx
        push    eax
        call    FUN_00580640
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        add     esp, 0x24
        inc     eax
        pop     esi
        mov     dword ptr [DAT_00805918], eax
        mov     dword ptr [DAT_00805908], ecx
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
