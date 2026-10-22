/*
 * FUN_005e1ba0 (69 B) — __thiscall setter with XOR-keyed guard.
 *
 * If param != [this+0x490] and the keyed object's byte at +0x17fc is
 * zero, calls FUN_005e1b60(this, param) and stores param at [this+0x490].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005e1b60(void *this, int param);

__declspec(naked) void __stdcall FUN_005e1ba0(void *this, int param)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x490]
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        cmp     edi, eax
        jz      l_done
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x17fc]
        test    al, al
        jnz     l_done
        push    edi
        mov     ecx, esi
        call    FUN_005e1b60
        mov     dword ptr [esi + 0x490], edi
    l_done:
        pop     edi
        pop     esi
        ret     4
    }


}
