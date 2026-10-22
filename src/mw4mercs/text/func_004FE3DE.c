/*
 * FUN_004FE3DE (171 B) — recursively processes a linked list of objects,
 * calling virtual methods and string helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004FE3E0(void);

__declspec(naked) void FUN_004FE3DE(void)
{
    __asm {
        nop
        nop
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x10]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        push    0x40
        lea     ecx, [esi+0x10]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax+0x24]
        mov     edx, dword ptr [edi]
        push    1
        lea     eax, [esi+0x9c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+4]
        push    eax
        lea     ecx, [esp+0xc]
        call    FUN_00412570
        push    eax
        push    edi
        call    FUN_00412a50
        mov     eax, dword ptr [esp+0x10]
        add     esp, 8
        test    eax, eax
        je      L_e43c
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_e43c
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_e43c:
        mov     eax, dword ptr [esi+0x90]
        mov     byte ptr [esp+0x10], 0
    L_e447:
        test    eax, eax
        je      L_e45a
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     eax, dword ptr [eax+4]
        je      L_e45a
        inc     byte ptr [esp+0x10]
        jmp     L_e447
    L_e45a:
        mov     eax, dword ptr [edi]
        push    1
        lea     ecx, [esp+0x14]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax+0x24]
        mov     esi, dword ptr [esi+0x90]
    L_e46e:
        test    esi, esi
        je      L_e483
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi+4]
        je      L_e483
        push    edi
        call    FUN_004FE3E0
        jmp     L_e46e
    L_e483:
        pop     edi
        pop     esi
        pop     ecx
        ret     4
    }
}
