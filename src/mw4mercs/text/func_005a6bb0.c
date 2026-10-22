/*
 * FUN_005a6bb0 (103 B) — __thiscall method.
 *
 * Iterates two sub-objects at this+0x184 and this+0x18c.
 * For each, if FUN_0041fd80() returns non-null, calls a
 * virtual method on the object at [ret+0xe0] with args (5,0),
 * then calls FUN_0041fcb0().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_0041fd80(void);
extern int __fastcall FUN_0041fcb0(void);

__declspec(naked) void __fastcall FUN_005a6bb0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x184]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      skip1
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
skip1:
        lea     esi, [edi + 0x18c]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      skip2
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
skip2:
        pop     edi
        pop     esi
        ret
    }
}
