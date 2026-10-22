/*
 * FUN_0054c5c0 (139 B) — __thiscall method.
 * ECX = this pointer, double param on stack (RET 0x8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0054c5c0(void)
{
    
__asm {
push    esi
        mov     esi, ecx

        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 4]

        mov     cl, byte ptr [esi + 0x586]
        test    cl, cl
        jz      L_0054C610

        fld     dword ptr [eax + 0x94]
        fmul    dword ptr [esi + 0x2E0]
        fstp    dword ptr [esi + 0x2E0]

        fld     dword ptr [eax + 0x9C]
        fmul    dword ptr [esi + 0x2DC]
        fstp    dword ptr [esi + 0x2DC]

        fld     dword ptr [eax + 0x98]
        fmul    dword ptr [esi + 0x2D8]
        fstp    dword ptr [esi + 0x2D8]

        pop     esi
        ret     0x8

L_0054C610:
        mov     cl, byte ptr [esi + 0x584]
        test    cl, cl
        jz      L_0054C647

        fld     dword ptr [eax + 0x68]
        fmul    dword ptr [esi + 0x2E0]
        fstp    dword ptr [esi + 0x2E0]

        fld     dword ptr [eax + 0x70]
        fmul    dword ptr [esi + 0x2DC]
        fstp    dword ptr [esi + 0x2DC]

        fld     dword ptr [eax + 0x6C]
        fmul    dword ptr [esi + 0x2D8]
        fstp    dword ptr [esi + 0x2D8]

L_0054C647:
        pop     esi
        ret     0x8
    }


}
