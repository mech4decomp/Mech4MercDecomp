/*
 * FUN_0040d9f0 (397 B) — engine/loader helper: builds a string object,
 * allocates a node, walks a list comparing strings, and links a new
 * node into the list. Contains an inline strcmp loop.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8810;

extern void __cdecl FUN_004128e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_0040d9d0(void);
extern void __cdecl FUN_0040f7f0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040f080(void);
extern void __cdecl FUN_0040f8c0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_0040f0a0(void);
extern void __cdecl FUN_0040f0f0(void);
extern void __cdecl FUN_0040d9b0(void);

__declspec(naked) void FUN_0040d9f0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x8]
        sub     esp, 0x14
        push    ebp
        push    esi
        push    edi
        push    eax
        lea     ecx, [esp+0x2c]
        call    FUN_00412570
        lea     ecx, [esp+0x28]
        call    FUN_004128e0
        mov     ecx, dword ptr [esp+0x2c]
        push    ecx
        lea     ecx, [esp+0x14]
        call    FUN_00412570
        mov     edx, dword ptr [g_007b8810]
        push    edx
        push    0x8
        call    FUN_004084c0
        add     esp, 0x8
        test    eax, eax
        jz      L42
        lea     ecx, [esp+0x10]
        push    ecx
        mov     ecx, eax
        call    FUN_0040d9d0
        mov     dword ptr [esp+0xc], eax
        jmp     L4A
L42:
        mov     dword ptr [esp+0xc], 0x0
L4A:
        mov     ebp, dword ptr [esp+0x24]
        lea     edx, [esp+0x28]
        push    edx
        lea     eax, [esp+0x30]
        push    eax
        mov     ecx, ebp
        call    FUN_0040f7f0
        mov     esi, dword ptr [eax]
        cmp     esi, dword ptr [ebp]
        jz      LA2
        mov     edi, dword ptr [esi+0x14]
        test    edi, edi
        jz      L8F
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L86
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L86
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L86:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L8F:
        push    ecx
        mov     eax, esp
        mov     ecx, ebp
        mov     dword ptr [esi+0x14], 0x0
        mov     dword ptr [eax], esi
        call    FUN_0040f080
LA2:
        lea     ecx, [esp+0x28]
        push    ecx
        lea     edx, [esp+0x28]
        push    edx
        mov     ecx, ebp
        call    FUN_0040f8c0
        mov     edi, dword ptr [eax]
        cmp     edi, dword ptr [ebp]
        mov     dword ptr [esp+0x2c], edi
        jz      LF2
        mov     esi, dword ptr [edi+0x10]
        mov     ecx, dword ptr [esp+0x28]
LC5:
        mov     al, byte ptr [ecx]
        mov     dl, al
        cmp     al, byte ptr [esi]
        jnz     LE9
        test    dl, dl
        jz      LE5
        mov     al, byte ptr [ecx+0x1]
        mov     dl, al
        cmp     al, byte ptr [esi+0x1]
        jnz     LE9
        add     ecx, 0x2
        add     esi, 0x2
        test    dl, dl
        jnz     LC5
LE5:
        xor     ecx, ecx
        jmp     LEE
LE9:
        sbb     ecx, ecx
        sbb     ecx, -1
LEE:
        test    ecx, ecx
        jge     L39
LF2:
        lea     ecx, [esp+0x28]
        push    ecx
        lea     ecx, [esp+0x1c]
        call    FUN_0040f060
        lea     edx, [esp+0x18]
        push    edx
        push    ecx
        lea     eax, [esp+0x34]
        mov     ecx, esp
        push    eax
        mov     dword ptr [esp+0x28], 0x0
        call    FUN_0040f0a0
        lea     ecx, [esp+0x1c]
        push    ecx
        mov     ecx, ebp
        call    FUN_0040f0f0
        mov     edx, dword ptr [eax]
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x2c], edx
        call    FUN_0040d9b0
        mov     edi, dword ptr [esp+0x2c]
L39:
        mov     eax, dword ptr [esp+0xc]
        mov     dword ptr [edi+0x14], eax
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        jz      L5B
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L5B
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L5B:
        mov     eax, dword ptr [esp+0x28]
        test    eax, eax
        jz      L76
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L76
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L76:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x14
        ret
    }
}
