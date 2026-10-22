/*
 * FUN_0064BBD0 (960 B) — __fastcall (ECX = this), RET 8 (2 stack dwords).
 *
 * Builds a large global table (0x805928-based, 0xa000 bytes) of entries from
 * an input object's data, iterating over a linked list of records (edi+0x18
 * type tag, edi+0x3c key) and dispatching on type (int/float/pointer) into
 * the table. Calls FUN_0064a780 at the end and returns 1 (or 0 on a bad
 * record type). Uses several global state dwords (0x8058xx/0x8059xx/0x80d9xx).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7f2ba8;   /* DAT_007f2ba8 */
extern int  g_80d984;   /* DAT_0080d984 */
extern int  g_80d970;   /* DAT_0080d970 */
extern int  g_7f299c;   /* DAT_007f299c */
extern int  g_805928;   /* DAT_00805928 */
extern int  g_805940;   /* DAT_00805940 */
extern int  g_805934;   /* DAT_00805934 */
extern int  g_8058dc;   /* DAT_008058dc */
extern int  g_8058e0;   /* DAT_008058e0 */
extern int  g_8058cc;   /* DAT_008058cc */
extern int  g_7de630;   /* DAT_007de630 */
extern int  g_805924;   /* DAT_00805924 */
extern int  g_8058c0;   /* DAT_008058c0 */
extern int  g_80d994;   /* DAT_0080d994 */
extern int  g_805930;   /* DAT_00805930 */
extern int  g_80592c;   /* DAT_0080592c */
extern int  g_80d9b4;   /* DAT_0080d9b4 */
extern int  g_80d9bc;   /* DAT_0080d9bc */
extern int  g_8058b8;   /* DAT_008058b8 */
extern int  g_805950;   /* DAT_00805950 */
extern char g_805958;   /* DAT_00805958 */
extern int  g_80d960;   /* DAT_0080d960 */
extern void (__stdcall *g_76b420)(void);   /* sprintf IAT */
extern void __cdecl FUN_0061fca0(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_0061ebc0(void);
extern void __cdecl FUN_00562f10(void);
extern void __cdecl FUN_0064a780(void);

__declspec(naked) void __fastcall FUN_0064BBD0(void)
{
    __asm {
        sub     esp, 0x118
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [g_7f2ba8]
        xor     ebx, ebx
        cmp     ecx, ebx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [g_80d984], ebp
        je      L_bf8
        push    ebp
        call    FUN_0061fca0
L_bf8:
        mov     eax, dword ptr [ebp + 0x20]
        mov     ecx, dword ptr [g_80d970]
        mov     esi, dword ptr [g_7f299c]
        mov     edx, dword ptr [ebp + 0x24]
        lea     eax, [eax + eax*4]
        mov     edi, dword ptr [ecx + eax*8 + 4]
        mov     ecx, dword ptr [g_805928]
        mov     eax, dword ptr [g_805940]
        inc     esi
        lea     eax, [ecx + eax*4 + 4]
        mov     dword ptr [g_7f299c], esi
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [g_805934], edx
        mov     dword ptr [g_8058dc], ebx
        mov     dword ptr [g_8058e0], ebx
        mov     dword ptr [g_8058cc], 0xffffffff
        mov     dword ptr [g_7de630], ebx
        mov     dword ptr [g_805924], ebx
        mov     dword ptr [g_8058c0], 1
        mov     dword ptr [g_80d994], ebx
        mov     dword ptr [g_805930], eax
        mov     dword ptr [g_80592c], eax
        jb      L_bc87
        push    ebx
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_bc87:
        mov     ecx, dword ptr [g_805928]
        add     eax, 4
        mov     dword ptr [esi], ebx
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_80592c], eax
        jb      L_bcb1
        push    ebx
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_bcb1:
        mov     edx, dword ptr [g_805928]
        add     eax, 4
        mov     dword ptr [esi], ebx
        mov     esi, eax
        add     edx, 0xa000
        cmp     esi, edx
        mov     dword ptr [g_80592c], eax
        jb      L_bcdb
        push    ebx
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_bcdb:
        mov     ecx, dword ptr [g_805928]
        add     eax, 4
        mov     dword ptr [esi], ebx
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_80592c], eax
        jb      L_bd05
        push    ebx
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_bd05:
        mov     ecx, dword ptr [esp + 0x12c]
        cmp     ecx, ebx
        mov     dword ptr [esi], ebx
        je      L_bf32
        mov     edi, dword ptr [edi + 0x28]
        cmp     edi, ebx
        mov     dword ptr [esp + 0x10], edi
        je      L_bf32
        lea     ebx, [ecx + 4]
        jmp     L_bd2e
L_bd2a:
        mov     edi, dword ptr [esp + 0x10]
L_bd2e:
        mov     ecx, dword ptr [edi + 0x18]
        mov     ebp, dword ptr [edi + 0x3c]
        cmp     ecx, 4
        mov     ecx, dword ptr [g_80d9b4]
        jne     L_beb1
        cmp     ebp, ecx
        jne     L_bdc6
        mov     cl, byte ptr [ebx - 4]
        cmp     cl, 1
        jne     L_bd89
        mov     edx, dword ptr [g_805928]
        fild    dword ptr [ebx]
        add     eax, 4
        mov     esi, eax
        add     edx, 0xa000
        fstp    dword ptr [esp + 0x1c]
        cmp     esi, edx
        mov     dword ptr [g_80592c], eax
        jb      L_bd7e
        push    0
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_bd7e:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi], ecx
        jmp     L_be09
L_bd89:
        cmp     cl, 2
        jne     L_be09
        mov     ecx, dword ptr [g_805928]
        mov     edx, dword ptr [ebx + 4]
        add     eax, 4
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [g_80592c], eax
        jb      L_bdbe
        push    0
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_bdbe:
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [esi], edx
        jmp     L_be09
L_bdc6:
        cmp     ebp, dword ptr [g_80d9bc]
        jne     L_be09
        cmp     byte ptr [ebx - 4], 1
        jne     L_bf7c
        mov     ecx, dword ptr [g_805928]
        mov     edi, dword ptr [ebx]
        add     eax, 4
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_80592c], eax
        jb      L_be03
        push    0
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_be03:
        mov     dword ptr [esi], edi
        mov     edi, dword ptr [esp + 0x10]
L_be09:
        cmp     dword ptr [ebp + 4], 3
        jne     L_bf1c
        mov     esi, dword ptr [g_8058b8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     edi, dword ptr [ebp + 8]
        je      L_bead
        push    eax
        push    edi
        call    FUN_006f3c80
        mov     edx, dword ptr [esi + 0x14]
        lea     ecx, [esi + 0x10]
        cmp     edx, dword ptr [ecx + 8]
        mov     dword ptr [esp + 0x14], eax
        je      L_be4f
        test    edx, edx
        je      L_be47
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [esp + 0x14]
L_be47:
        add     edx, 4
        mov     dword ptr [ecx + 4], edx
        jmp     L_be60
L_be4f:
        push    1
        lea     eax, [esp + 0x18]
        push    eax
        push    edx
        call    FUN_0061ebc0
        mov     eax, dword ptr [esp + 0x14]
L_be60:
        test    eax, eax
        mov     ebp, eax
        jne     L_be8c
L_be66:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ecx]
        push    edx
        lea     eax, [esp + 0x2c]
        push    0x792c5c
        push    eax
        call    dword ptr [g_76b420]
        lea     ecx, [esp + 0x34]
        push    ecx
        push    0
        call    FUN_00562f10
        add     esp, 0x14
L_be8c:
        mov     eax, dword ptr [g_80592c]
        mov     esi, dword ptr [eax]
        mov     ecx, edi
        mov     edx, ecx
        shr     ecx, 2
        mov     edi, ebp
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     edi, dword ptr [esp + 0x10]
        mov     dword ptr [eax], ebp
        jmp     L_bf1c
L_bead:
        xor     ebp, ebp
        jmp     L_be66
L_beb1:
        cmp     ebp, ecx
        jne     L_bee5
        mov     ecx, dword ptr [g_805928]
        add     eax, 4
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_80592c], eax
        jb      L_bede
        push    0
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_bede:
        lea     edx, [ebx + 4]
        mov     dword ptr [esi], edx
        jmp     L_bf1c
L_bee5:
        cmp     ebp, dword ptr [g_80d9bc]
        jne     L_bf7c
        mov     ecx, dword ptr [g_805928]
        add     eax, 4
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_80592c], eax
        jb      L_bf1a
        push    0
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_bf1a:
        mov     dword ptr [esi], ebx
L_bf1c:
        mov     ecx, dword ptr [edi + 0xc]
        add     ebx, 0xc
        test    ecx, ecx
        mov     dword ptr [esp + 0x10], ecx
        jne     L_bd2a
        mov     ebp, dword ptr [esp + 0x18]
L_bf32:
        mov     eax, dword ptr [ebp + 0x20]
        mov     bl, byte ptr [ebp + 0x2c]
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [g_805950], eax
        mov     eax, dword ptr [esp + 0x130]
        test    bl, bl
        push    eax
        sete    dl
        push    ecx
        mov     byte ptr [g_805958], dl
        mov     byte ptr [ebp + 0x2c], 1
        call    FUN_0064a780
        mov     edx, dword ptr [g_80d960]
        mov     eax, dword ptr [g_805924]
        add     esp, 8
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x28], edx
        pop     ebp
        pop     ebx
        add     esp, 0x118
        ret     8
L_bf7c:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x118
        ret     8
    }
}
