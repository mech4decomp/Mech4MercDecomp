/*
 * FUN_005c2030 (157 B) — __fastcall (ECX = this).
 *
 * Calls FUN_005c6060, then reads a nested pointer chain and calls
 * FUN_0041c540 with a 3-dword local struct. On success adds a double
 * to a float field; on failure stores the local struct into this+0x4e4
 * and calls FUN_00707e70(0) (__stdcall, RET 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005c6060(void);
extern char __cdecl FUN_0041c540(void *a, void *b, void *c);
extern void __stdcall FUN_00707e70(int a);

__declspec(naked) void func_005c2030(void)
{
    

extern int DAT_007b220c;
__asm {
sub     esp, 0xc
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_005c6060
        mov     eax, dword ptr [esi + 0x170]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 8], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov ecx, dword ptr [DAT_007b220c]
        mov     dword ptr [esp + 0xc], edx
        mov     eax, dword ptr [eax + 0x2c]
        push    ecx
        lea     edx, [esp + 0xc]
        push    edx
        lea     edi, [esi + 0x4e4]
        push    edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jz      l_fail
        fld     qword ptr [esi + 0x558]
        pop     edi
        fadd    dword ptr [esi + 0x3d8]
        fstp    dword ptr [esi + 0x3d8]
        pop     esi
        add     esp, 0xc
        ret
    l_fail:
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x10]
        push    0x0
        mov     dword ptr [esi + 0x3d8], 0x0
        mov     dword ptr [edi], eax
        mov     dword ptr [edi + 4], ecx
        mov     dword ptr [edi + 8], edx
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x4dc]
        pop     edi
        pop     esi
        add     esp, 0xc
        ret
    }


}
