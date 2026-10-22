/*
 * FUN_005f5b80 (62 B) — __thiscall (ECX = this). Stops the marker object
 * at this->0x4b4 (virtual call + cleanup) then calls FUN_005f9fe0.
 *
 * CFLAGS: /O1
 */

extern void FUN_0041fd80(void);
extern void FUN_0041fcb0(void);
extern void FUN_005f9fe0(void);

__declspec(naked) void __fastcall FUN_005f5b80(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x4b4]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_5bb4
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [eax]
        push    0
        push    5
        mov     ecx, eax
        call    dword ptr [edx + 4]
        mov     ecx, esi
        call    FUN_0041fcb0
    l_5bb4:
        mov     ecx, edi
        call    FUN_005f9fe0
        pop     edi
        pop     esi
        ret
    }
}
