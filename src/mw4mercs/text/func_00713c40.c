/*
 * FUN_00713c40 (57 B) — __cdecl, RET 0x10 (4 stack params).
 *
 * If g_87c254 != 0, call FUN_00713de0(). Then build a 7-arg virtual call
 * through the object at g_85a248 (vtable slot +0x68).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_87c254;
extern int g_85a248;
extern void __cdecl FUN_00713de0(void);

__declspec(naked) void __cdecl FUN_00713c40(void)
{
    __asm {
        mov     al, byte ptr [g_87c254]
        test    al, al
        jz      label1
        call    FUN_00713de0
label1:
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [g_85a248]
        mov     ecx, dword ptr [eax]
        push    0x0
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        push    0x2c4
        push    0x4
        push    eax
        call    dword ptr [ecx + 0x68]
        ret     0x10
    }
}
