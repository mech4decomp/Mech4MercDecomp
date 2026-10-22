/*
 * FUN_004fc170 (74 B) — __thiscall, RET 0x4: copies a sub-object from a
 * source record into `this` and links a child node. Returns `this` in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcd0(void);

__declspec(naked) void FUN_004fc170(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        lea     eax, [edi + 0x10]
        push    eax
        lea     ecx, [esi + 0x10]
        call    FUN_00412740
        mov     ecx, dword ptr [edi + 0x18]
        mov     ebx, dword ptr [esi + 0x14]
        mov     dword ptr [esi + 0x18], ecx
        mov     ecx, ebx
        call    FUN_0041fcb0
        mov     edi, dword ptr [edi + 0x14]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_fc1b2
        mov     ecx, edi
        call    FUN_0041fd80
        push    eax
        mov     ecx, ebx
        call    FUN_0041fcd0
    L_fc1b2:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
