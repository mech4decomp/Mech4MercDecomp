/*
 * FUN_00678CB0 (712 B) — __cdecl, 1 stack param (edi = [esp+4]).
 * Initializes an object: calls vtable methods, reads a global, does a
 * string copy (repne scasb / rep movsd / rep movsb) into [ebx+0x68],
 * then registers a series of string properties via FUN_00411CB0 and
 * fills a 10-entry array via FUN_00411D60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00507790(void);
extern void __cdecl FUN_00411BF0(void);
extern void __cdecl FUN_004FCA80(void);
extern void __cdecl FUN_006FC4D0(void);
extern void __cdecl FUN_00637B40(void);
extern void __cdecl FUN_00411CB0(void);
extern void __cdecl FUN_00411D60(void);

extern unsigned long g_7dab44;
extern unsigned long g_7dab40;
extern unsigned char g_7b8ef0;
extern unsigned char g_7b8de8[];
extern unsigned long g_76b420;

extern char g_797eec[];
extern char g_797ee4[];
extern char g_797ed4[];
extern char g_786cf4[];
extern char g_7886e8[];
extern char g_7886dc[];
extern char g_788718[];
extern char g_788710[];
extern char g_788708[];
extern char g_788700[];
extern char g_7818b4[];
extern char g_7886bc[];
extern char g_7886cc[];
extern char g_7886ac[];
extern char g_797ecc[];

__declspec(naked) void func_00678CB0(void)
{
    __asm {
        sub     esp, 0x10c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x120]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x140
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00507790
        mov     edx, dword ptr [esi]
        add     esp, 4
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     ebp, dword ptr [edi + 4]
        mov     ebx, eax
        push    1
        lea     eax, [esp + 0x1c]
        push    eax
        push    offset g_797eec
        mov     ecx, ebp
        mov     dword ptr [ebx], 0x140
        call    FUN_00411BF0
        mov     ecx, dword ptr [g_7dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_7dab40]
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004FCA80
        mov     dword ptr [ebx + 0x64], eax
        push    0
        lea     eax, [esp + 0x18]
        push    eax
        push    offset g_797ee4
        mov     ecx, ebp
        mov     byte ptr [ebx + 0x68], 0
        call    FUN_00411BF0
        test    al, al
        je      L_dac
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        call    FUN_006FC4D0
        test    al, al
        je      L_a8
        mov     al, byte ptr [g_7b8ef0]
        test    al, al
        je      L_d7d
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7b8de8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edi, [ebx + 0x68]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     byte ptr [g_7b8ef0], al
        jmp     L_dac
L_d7d:
        mov     edi, dword ptr [esp + 0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edi, [ebx + 0x68]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     byte ptr [g_7b8ef0], 0
        jmp     L_dac
L_a8:
        mov     byte ptr [ebx + 0x68], 0
L_dac:
        call    FUN_00637B40
        lea     eax, [ebx + 0x124]
        push    0
        push    eax
        lea     esi, [ebx + 0x138]
        lea     edi, [ebx + 0x134]
        push    offset g_786cf4
        mov     ecx, ebp
        mov     dword ptr [esi], 0
        mov     dword ptr [edi], 0
        mov     dword ptr [ebx + 0x13c], 0
        mov     dword ptr [ebx + 0x114], 0xffffffff
        mov     dword ptr [ebx + 0x110], 0xffffffff
        mov     dword ptr [ebx + 0x118], 0xffffffff
        mov     dword ptr [ebx + 0x11c], 0xffffffff
        mov     dword ptr [ebx + 0x120], 0xffffffff
        mov     dword ptr [eax], 0xffffffff
        mov     dword ptr [ebx + 0x128], 0xffffffff
        mov     dword ptr [ebx + 0x12c], 0xffffffff
        mov     dword ptr [ebx + 0x130], 0xffffffff
        call    FUN_00411CB0
        push    0
        lea     eax, [ebx + 0x128]
        push    eax
        push    offset g_797ed4
        mov     ecx, ebp
        call    FUN_00411CB0
        push    0
        lea     eax, [ebx + 0x12c]
        push    eax
        push    offset g_7886e8
        mov     ecx, ebp
        call    FUN_00411CB0
        push    0
        lea     eax, [ebx + 0x130]
        push    eax
        push    offset g_7886dc
        mov     ecx, ebp
        call    FUN_00411CB0
        push    0
        lea     eax, [ebx + 0x110]
        push    eax
        push    offset g_788718
        mov     ecx, ebp
        call    FUN_00411CB0
        push    0
        lea     eax, [ebx + 0x114]
        push    eax
        push    offset g_788710
        mov     ecx, ebp
        call    FUN_00411CB0
        push    0
        lea     eax, [ebx + 0x118]
        push    eax
        push    offset g_788708
        mov     ecx, ebp
        call    FUN_00411CB0
        push    0
        lea     eax, [ebx + 0x11c]
        push    eax
        push    offset g_788700
        mov     ecx, ebp
        call    FUN_00411CB0
        push    0
        lea     eax, [ebx + 0x120]
        push    eax
        push    offset g_7818b4
        mov     ecx, ebp
        call    FUN_00411CB0
        push    0
        push    edi
        push    offset g_7886bc
        mov     ecx, ebp
        call    FUN_00411CB0
        push    0
        push    esi
        push    offset g_7886cc
        mov     ecx, ebp
        call    FUN_00411CB0
        push    0
        lea     eax, [ebx + 0x13c]
        push    eax
        push    offset g_7886ac
        mov     ecx, ebp
        call    FUN_00411CB0
        mov     edi, dword ptr [g_76b420]
        xor     esi, esi
        add     ebx, 0xe8
L_f27:
        push    esi
        lea     ecx, [esp + 0x20]
        push    offset g_797ecc
        push    ecx
        call    edi
        add     esp, 0xc
        push    0
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, ebp
        mov     dword ptr [esp + 0x1c], 0
        call    FUN_00411D60
        test    al, al
        jne     L_f5e
        mov     dword ptr [esp + 0x10], 0
L_f5e:
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ebx], ecx
        inc     esi
        add     ebx, 4
        cmp     esi, 0xa
        jl      L_f27
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10c
        ret
    }
}
