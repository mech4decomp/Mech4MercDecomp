/*
 * FUN_004e6d10 (1086 B) — MLR/Adept application-core loader. Reads a
 * configuration block via a stream (FUN_00411bf0/FUN_00411d60 string-table
 * lookups), builds a per-entry array (FUN_00417a40 count, FUN_004084d0
 * alloc), parses entries (FUN_004d0100), and writes results back through
 * the object's virtual method at vtable+0x24.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_004e7e60(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004e7d60(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_00411a80(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412820(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004d0100(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_00412a50(void);

extern int g_0076b2dc;   /* DAT_0076b2dc */
extern int g_007db0a0;   /* DAT_007db0a0 */

__declspec(naked) void FUN_004e6d10(void)
{
    __asm {
        sub     esp, 0xb4
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0xc8]
        push    edi
        push    0x1
        lea     eax, [esp + 0x44]
        push    eax
        or      ebx, 0xffffffff
        mov     ebp, 0x76b768
        push    0x77430c
        mov     ecx, esi
        mov     dword ptr [esp + 0x3c], ebx
        mov     dword ptr [esp + 0x4c], ebp
        call    FUN_00411bf0
        mov     ecx, dword ptr [esp + 0x40]
        push    ecx
        call    FUN_004e7e60
        add     esp, 0x4
        xor     edi, edi
        push    edi
        lea     edx, [esp + 0x58]
        push    edx
        push    0x7742f4
        mov     ecx, esi
        mov     dword ptr [esp + 0x64], eax
        call    FUN_00411bf0
        test    al, al
        jz      L6D7E
        mov     eax, dword ptr [esp + 0x54]
        push    eax
        call    FUN_004e7e60
        add     esp, 0x4
        mov     dword ptr [esp + 0x30], eax
L6D7E:
        push    edi
        lea     ecx, [esp + 0x6c]
        push    ecx
        push    0x774118
        mov     ecx, esi
        mov     dword ptr [esp + 0x44], ebx
        call    FUN_00411bf0
        test    al, al
        jz      L6DA9
        mov     edx, dword ptr [esp + 0x68]
        push    edx
        call    FUN_004e7e60
        add     esp, 0x4
        mov     dword ptr [esp + 0x38], eax
L6DA9:
        push    edi
        lea     eax, [esp + 0x40]
        push    eax
        push    0x7742e0
        mov     ecx, esi
        mov     dword ptr [esp + 0x48], 0x7742d4
        call    FUN_00411bf0
        mov     ecx, dword ptr [esp + 0x3c]
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_00412570
        push    edi
        lea     edx, [esp + 0x4c]
        push    edx
        push    0x7742c8
        mov     ecx, esi
        mov     dword ptr [esp + 0x54], ebp
        call    FUN_00411bf0
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        call    FUN_004e7d60
        add     esp, 0x4
        push    0x1
        lea     ecx, [esp + 0x48]
        push    ecx
        push    0x7742b4
        mov     ecx, esi
        mov     dword ptr [esp + 0x5c], eax
        call    FUN_00411d60
        push    edi
        lea     edx, [esp + 0x30]
        push    edx
        push    0x77429c
        mov     ecx, esi
        call    FUN_00411d60
        test    al, al
        jnz     L6E29
        mov     eax, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x2c], eax
L6E29:
        push    edi
        lea     ecx, [esp + 0x38]
        push    ecx
        push    0x774108
        mov     ecx, esi
        mov     dword ptr [esp + 0x40], 0x0
        call    FUN_00411d60
        push    edi
        lea     edx, [esp + 0x50]
        push    edx
        push    0x7740e4
        mov     ecx, esi
        call    FUN_00411d60
        test    al, al
        jnz     L6E61
        mov     eax, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x4c], eax
L6E61:
        push    0x77428c
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x20], edi
        call    FUN_00411a80
        mov     ebx, eax
        mov     dword ptr [esp + 0x78], ebx
        mov     ecx, dword ptr [ebx]
        mov     dword ptr [esp + 0x7c], ecx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x64], ebx
        mov     dword ptr [esp + 0x74], 0x76cc9c
        call    FUN_00417a40
        mov     ebp, eax
        cmp     ebp, edi
        jz      L6EDF
        jbe     L6ECE
        lea     edx, [ebp*8 + 0x0]
        push    edx
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L6EC6
        push    0x4e8320
        push    ebp
        push    0x8
        push    esi
        call    FUN_00406c90
        mov     dword ptr [esp + 0x18], esi
        jmp     L6EDB
L6EC6:
        xor     esi, esi
        mov     dword ptr [esp + 0x18], esi
        jmp     L6EDB
L6ECE:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esp + 0x18], edi
L6EDB:
        mov     dword ptr [esp + 0x1c], ebp
L6EDF:
        lea     ecx, [esp + 0x74]
        mov     dword ptr [esp + 0x10], edi
        call    FUN_0040c0e0
        cmp     eax, edi
        jz      L7047
        mov     ecx, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [g_0076b2dc]
        lea     esi, [ecx + 0x4]
L6F01:
        cmp     dword ptr [esp + 0x10], ebp
        jge     L7043
        mov     edx, dword ptr [eax + 0x18]
        push    edx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x24], edi
        call    FUN_00412780
        push    0x774288
        push    edi
        lea     eax, [esp + 0x78]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00412820
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00412740
        lea     ecx, [esp + 0x70]
        call    FUN_0040d9b0
        lea     ecx, [esp + 0x80]
        call    FUN_004d1f10
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [g_007db0a0]
        lea     edx, [esp + 0x84]
        push    edx
        call    FUN_004d0100
        push    0x774288
        push    0x1
        lea     eax, [esp + 0x64]
        push    eax
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x30], edi
        call    FUN_00412820
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_00412740
        lea     ecx, [esp + 0x5c]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esp + 0x24]
        lea     ecx, [esp + 0x6c]
        push    ecx
        push    0x774284
        push    edx
        call    ebx
        mov     ax, word ptr [esp + 0xcc]
        mov     word ptr [esi - 0x4], ax
        mov     cx, word ptr [esp + 0xce]
        mov     word ptr [esi - 0x2], cx
        mov     edx, dword ptr [esp + 0x78]
        mov     dword ptr [esi], edx
        mov     eax, dword ptr [esp + 0x30]
        add     esp, 0xc
        cmp     eax, edi
        jz      L6FE4
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L6FE4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L6FE4:
        lea     ecx, [esp + 0x80]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, edi
        jz      L700B
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L700B
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L700B:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, edi
        jz      L7026
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L7026
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L7026:
        mov     eax, dword ptr [esp + 0x10]
        inc     eax
        lea     ecx, [esp + 0x74]
        mov     dword ptr [esp + 0x10], eax
        add     esi, 0x8
        call    FUN_0040c0e0
        cmp     eax, edi
        jnz     L6F01
L7043:
        mov     ebx, dword ptr [esp + 0x64]
L7047:
        cmp     ebx, edi
        jz      L705B
        mov     ecx, ebx
        call    FUN_00417980
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L705B:
        mov     esi, dword ptr [esp + 0xc8]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0xd4]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x68], edi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x48]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [esp + 0x28]
        push    ecx
        push    esi
        call    FUN_00412a50
        mov     edx, dword ptr [esi]
        add     esp, 0x8
        push    0x4
        lea     eax, [esp + 0x54]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x5c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x34]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x64]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x3c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, edi
        jbe     L7117
        mov     ebx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esi]
        shl     eax, 0x3
        push    eax
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        jmp     L711B
L7117:
        mov     ebx, dword ptr [esp + 0x18]
L711B:
        cmp     ebx, edi
        jz      L7128
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L7128:
        mov     eax, dword ptr [esp + 0x28]
        cmp     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      L7147
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L7147
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L7147:
        add     esp, 0xb4
        ret
    }
}
