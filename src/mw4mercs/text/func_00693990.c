/*
 * FUN_00693990 (148 B) — __thiscall (1 stack arg, RET 4). Calls
 * FUN_004F9430/FUN_004D1F80, then compares the string at [this+0x1F8]
 * against the literal at 0x76B768 and, if different, calls FUN_00411C40
 * with 0x797EE4. Ends with FUN_004D21C0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004F9430(void);
extern void __cdecl FUN_004D1F80(void);
extern void __cdecl FUN_00411C40(void);
extern void __cdecl FUN_004D21C0(void);

__declspec(naked) void FUN_00693990(void)
{
    __asm {
        sub     esp, 0x44
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x58]
        mov     esi, ecx
        push    edi
        call    FUN_004F9430
        push    1
        lea     eax, [esi + 0x1e8]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004D1F80
        mov     ecx, dword ptr [esp + 0x38]
        push    ecx
        push    0x7993e4
        mov     ecx, edi
        call    FUN_00411C40
        lea     ebp, [esi + 0x1f8]
        mov     esi, 0x76b768
        mov     eax, ebp
loc_6939d3:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     loc_6939fb
        test    cl, cl
        je      loc_6939f7
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     loc_6939fb
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     loc_6939d3
loc_6939f7:
        xor     eax, eax
        jmp     loc_693a00
loc_6939fb:
        sbb     eax, eax
        sbb     eax, -1
loc_693a00:
        test    eax, eax
        je      loc_693a11
        push    ebp
        push    0x797ee4
        mov     ecx, edi
        call    FUN_00411C40
loc_693a11:
        lea     ecx, [esp + 0x10]
        call    FUN_004D21C0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     4
    }
}
