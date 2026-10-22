/*
 * FUN_005253C9 (276 B @ 0x5253c9) - __stdcall, RET 8. Walks a linked list of
 * entries, builds a string via the XOR-obfuscated object graph (key
 * 0x85739531), and copies it into a buffer. (Block 0x5253C9 is 279 B; the
 * last 3 bytes are 0x90 padding.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004129c0(void);
extern void __cdecl FUN_00412950(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f49a0(void);
extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void FUN_005253C9(void)
{
    __asm {
        mov     dword ptr [esp + 0x10], 0
        jmp     L_5253d7
L_5253d3:
        mov     eax, dword ptr [esp + 0x20]
L_5253d7:
        test    eax, eax
        je      L_5254bf
        mov     esi, dword ptr [eax]
        test    esi, esi
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [esp + 0x20], eax
        je      L_5254bf
        cmp     dword ptr [esp + 0x10], 0x40
        jge     L_5254bf
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jle     L_5253d3
        mov     eax, dword ptr [ebp]
        test    eax, eax
        je      L_525416
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], 0
L_525416:
        push    0
        push    0x100
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_007dab44]
        mov     ebx, eax
        mov     eax, dword ptr [g_007dab40]
        mov     dword ptr [esp + 0x28], 0
        mov     edx, dword ptr [ecx]
        xor     edx, eax
        mov     ecx, dword ptr [edx + 0xc]
        mov     edx, dword ptr [esi + 0x38]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    edx
        mov     dword ptr [ebp], ebx
        call    dword ptr [eax + 0x34]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_00412780
        lea     ecx, [esp + 0x28]
        call    FUN_004129c0
        mov     ecx, eax
        call    FUN_00412950
        mov     edi, dword ptr [esp + 0x28]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x28]
        inc     esi
        add     ebp, 4
        test    eax, eax
        mov     dword ptr [esp + 0x10], esi
        je      L_5253d3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_5253d3
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     L_5253d3
L_5254bf:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx], edx
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x14
        ret     8
    }
}
