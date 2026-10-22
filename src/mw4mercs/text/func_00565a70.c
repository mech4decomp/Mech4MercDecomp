/*
 * FUN_00565A70 (117 B) — Indexed lookup and dispatch helper.
 *
 * Checks globals and security cookies, then looks up an entry by index
 * in a table, validates it, and dispatches to a handler.
 *
 * __cdecl (params on stack), returns int (0 on success, E_FAIL on error).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_00565A70(void)
{
    

extern int DAT_007eebd4;
extern int DAT_007eebc0;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1005650ab(void);
__asm {
        mov eax, dword ptr [DAT_007eebd4]
        test    eax, eax
        jne     check2
        mov     eax, 0x80004005
        ret
check2:
        mov eax, dword ptr [DAT_007eebc0]
        test    eax, eax
        je      return_0
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x0c]
        xor     ecx, 0x85739531
        jne     ok
        mov     eax, 0x80004005
        ret
ok:
        mov     eax, dword ptr [esp + 4]
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        lea     ecx, dword ptr [ecx + edx*8]
        mov     dl, byte ptr [ecx + 0x3538]
        test    dl, dl
        je      return_0
        mov     ecx, dword ptr [ecx + 0x3584]
        test    ecx, ecx
        je      return_0
        mov     edx, dword ptr [ecx + 0x170]
        test    edx, edx
        je      return_0
        push    0
        push    eax
        call FUN_1005650ab
        add     esp, 8
return_0:
        xor     eax, eax
        ret
    }


}
