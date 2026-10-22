/*
 * FUN_005648D0 (125 B) — Security-checked dispatch function.
 *
 * Validates security cookies and flags, then dispatches to handlers.
 * Returns 0 on success, 1 if global not ready, E_FAIL on validation failure.
 *
 * __cdecl (params on stack), returns int.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_005648D0(void)
{
    

extern int DAT_007eebbc;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007ee7b8;
extern void __cdecl FUN_100563c2f(void);
extern void __cdecl FUN_006fc520(void);
__asm {
        mov eax, dword ptr [DAT_007eebbc]
        test    eax, eax
        jne     check_cookie
        mov     eax, 1
        ret
check_cookie:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x0c]
        xor     edx, 0x85739531
        lea     eax, dword ptr [ecx + 0x0c]
        je      fail
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        mov     dl, byte ptr [ecx + 0x16]
        test    dl, dl
        je      fail
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x17]
        test    al, al
        je      fail
        mov eax, dword ptr [DAT_007ee7b8]
        test    eax, eax
        je      fail
        mov     eax, dword ptr [esp + 4]
        push    eax
        call FUN_100563c2f
        mov ecx, dword ptr [DAT_007ee7b8]
        add     esp, 4
        push    ecx
        call FUN_006fc520
        mov dword ptr [DAT_007ee7b8], 0x0
        xor     eax, eax
        ret
fail:
        mov     eax, 0x80004005
        ret
    }


}
