/*
 * FUN_0057BBE0 (187 B) — Object rendering/transform helper.
 *
 * Takes an object pointer and a parameter, sets up a transform context
 * from global data and object fields, calls several helpers, then
 * dispatches a virtual method and a final cleanup call.
 *
 * __cdecl (params on stack), returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_0057BBE0(void)
{
    

extern int DAT_007b8cec;
extern int DAT_007b8ce8;
extern int DAT_007b8cf0;
extern void __cdecl FUN_10041ac7e(void);
extern void __cdecl FUN_100419ff7(void);
extern void __cdecl FUN_1004da99b(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004e25e5(void);
__asm {
sub     esp, 0x48
        mov eax, dword ptr [DAT_007b8cec]
        mov ecx, dword ptr [DAT_007b8ce8]
        mov edx, dword ptr [DAT_007b8cf0]
        push    esi
        mov     esi, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x08], eax
        mov     eax, dword ptr [esi + 0xd8]
        push    edi
        lea     edi, [eax + 0x80]
        mov     dword ptr [esp + 0x08], ecx
        push    edi
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x14], edx
        call FUN_10041ac7e
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x0c], eax
        mov     dword ptr [esp + 0x08], edx
        fld     dword ptr [edi + 0x0c]
        mov     eax, dword ptr [edi + 0x1c]
        mov     ecx, dword ptr [edi + 0x2c]
        fstp    dword ptr [esp + 0x2c]
        mov     edx, eax
        mov     dword ptr [esp + 0x18], eax
        mov     eax, ecx
        mov     dword ptr [esp + 0x1c], ecx
        lea     ecx, [esp + 0x08]
        push    ecx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x40], edx
        mov     dword ptr [esp + 0x50], eax
        call FUN_100419ff7
        lea     edx, [esp + 0x20]
        push    edx
        mov     ecx, esi
        call FUN_1004da99b
        mov     eax, dword ptr [esi]
        push    0x01
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        push    esi
        xor     ecx, 0x85739531
        call FUN_1004e25e5
        pop     edi
        pop     esi
        add     esp, 0x48
        ret
    }


}
