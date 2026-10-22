/*
 * FUN_00625820 (657 B) — ABL interpreter helper. __thiscall (ECX=this),
 * RET 0x10. Builds a log/error message object: resolves a vtable via the
 * XOR-obfuscated globals 0x7dab44/0x7dab40, calls virtual method +0x34 to
 * fetch localized strings (strlen+copy into a stack buffer), allocates a
 * 0x138-byte object, sets a color value via a 7-entry jump table, then
 * formats and dispatches the message.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern void *g_0076b420;

extern void __cdecl FUN_004cdfa0(void);
extern void *__cdecl FUN_004084d0(void);
extern void *__cdecl FUN_00560190(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_00626460(void);
extern void __cdecl FUN_006264e0(void);
extern void __cdecl FUN_00626470(void);

__declspec(naked) void FUN_00625820(void)
{
    __asm {
        sub     esp, 0x220
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [eax]
        __emit 0x89   /* mov dword ptr [esp],ecx — zero-disp [esp], MSVC6 drops the 00 disp byte */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     ecx, dword ptr [g_007dab40]
        push    ebx
        xor     edx, ecx
        push    ebp
        mov     ebp, dword ptr [edx + 0xc]
        mov     byte ptr [esp + 0x28], 0x0
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [esp + 0x230]
        push    esi
        and     ecx, 0xff
        push    edi
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        xor     ebp, 0x85739531
        call    FUN_004cdfa0
        mov     ebx, eax
        test    ebx, ebx
        jz      LAB_62596e

        mov     al, byte ptr [esp + 0x23c]
        cmp     al, 0x3
        jnz     LAB_625892
        mov     edx, dword ptr [ebp]
        push    0x2d3
        mov     ecx, ebp
        call    dword ptr [edx + 0x34]
        jmp     LAB_62591f

LAB_625892:
        cmp     al, 0x4
        jnz     LAB_6258a5
        mov     edx, dword ptr [ebp]
        push    0x2e5
        mov     ecx, ebp
        call    dword ptr [edx + 0x34]
        jmp     LAB_62591f

LAB_6258a5:
        cmp     al, 0x5
        jnz     LAB_62590e
        mov     edx, dword ptr [ebp]
        push    0x2d3
        mov     ecx, ebp
        call    dword ptr [edx + 0x34]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [esp + 0x30]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     edx, dword ptr [ebp]
        push    0x2e5
        mov     ecx, ebp
        call    dword ptr [edx + 0x34]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x30]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        dec     edi
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, ebp
        jmp     LAB_62593d

LAB_62590e:
        cmp     al, 0x1
        jnz     LAB_625942
        mov     eax, dword ptr [ebp]
        push    0x301
        mov     ecx, ebp
        call    dword ptr [eax + 0x34]

LAB_62591f:
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     edx, [esp + 0x30]
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax

LAB_62593d:
        and     ecx, 0x3
        rep     movsb

LAB_625942:
        mov     edi, dword ptr [ebx + 0x30]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x30]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb

LAB_62596e:
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      LAB_62598c
        push    0x0
        mov     ecx, eax
        call    FUN_00560190
        mov     esi, eax
        jmp     LAB_62598e

LAB_62598c:
        xor     esi, esi

LAB_62598e:
        mov     ebx, dword ptr [esp + 0x23c]
        mov     eax, ebx
        and     eax, 0xff
        cmp     eax, 0x6
        ja      LAB_6259f3
        jmp     dword ptr [eax*4 + 0x625ab4]

LAB_6259a8:
        mov     dword ptr [esi + 0x104], 0xfae6e632
        mov     byte ptr [esp + 0x30], 0x0
        jmp     LAB_6259f3

LAB_6259b9:
        mov     dword ptr [esi + 0x104], 0xfa00bf00
        jmp     LAB_6259f3

LAB_6259c5:
        mov     dword ptr [esi + 0x104], 0xfa7a997a
        jmp     LAB_6259f3

LAB_6259d1:
        mov     dword ptr [esi + 0x104], 0xfa00f300
        jmp     LAB_6259f3

LAB_6259dd:
        mov     dword ptr [esi + 0x104], 0xfa7acd7a
        jmp     LAB_6259f3

LAB_6259e9:
        mov     dword ptr [esi + 0x104], 0xfabf3030

LAB_6259f3:
        mov     eax, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        mov     dword ptr [esi + 0x10c], 0x0
        mov     byte ptr [esi + 0x110], 0x1
        call    dword ptr [eax + 0x4]
        mov     al, byte ptr [esp + 0x30]
        test    al, al
        jz      LAB_625a46
        mov     ecx, dword ptr [esp + 0x234]
        push    ecx
        lea     edx, [esp + 0x34]
        push    edx
        lea     eax, [esp + 0x138]
        push    0x78d000
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        push    0x0
        push    0x0
        lea     ecx, [esp + 0x138]
        push    ecx
        jmp     LAB_625a52

LAB_625a46:
        mov     edx, dword ptr [esp + 0x234]
        push    0x0
        push    0x0
        push    edx

LAB_625a52:
        mov     ecx, esi
        call    FUN_00560420
        mov     al, byte ptr [esp + 0x238]
        mov     cl, byte ptr [esp + 0x240]
        mov     edx, dword ptr [esp + 0x10]
        mov     byte ptr [esp + 0x2c], al
        mov     byte ptr [esp + 0x2e], cl
        lea     eax, [esp + 0x18]
        mov     dword ptr [esp + 0x28], esi
        push    eax
        lea     ecx, [esp + 0x14]
        lea     esi, [edx + 0x50]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x35], bl
        call    FUN_00626460
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_006264e0
        lea     edx, [esp + 0x1c]
        push    edx
        mov     ecx, esi
        call    FUN_00626470
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x220
        ret     0x10
    }
}
