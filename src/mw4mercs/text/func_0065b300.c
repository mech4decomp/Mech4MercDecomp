/*
 * FUN_0065b300 (62 B) — __fastcall helper.
 *
 * If the object at [esi+4]'s sub-object flag at +0xdc != 1, resets
 * [esi+0x14]=0, stores FUN_00707e70(0) into [esi+0x18], calls
 * FUN_0065a840(obj, [esi+8]), and sets [obj+0x614]=1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __cdecl FUN_00707e70(int a);
extern void __cdecl FUN_0065a840(void *a, void *b);

__declspec(naked) void FUN_0065b300(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x4]
        mov     eax, dword ptr [edi + 0x170]
        cmp     byte ptr [eax + 0xdc], 0x1
        jz      L_end
        push    0x0
        mov     dword ptr [esi + 0x14], 0x0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x18]
        mov     ecx, dword ptr [esi + 0x8]
        push    ecx
        push    edi
        call    FUN_0065a840
        add     esp, 0x8
        mov     byte ptr [edi + 0x614], 0x1
    L_end:
        pop     edi
        pop     esi
        ret
    }
}
