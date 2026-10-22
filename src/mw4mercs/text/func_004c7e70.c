/*
 * FUN_004c7e70 (178 B) — MLR transform/update. Reads 3 dwords from the arg
 * object, calls FUN_0041c830, computes a few vector differences, calls
 * FUN_0041fde0, updates flags and dispatches virtual calls. __thiscall,
 * RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0041fde0(void);

__declspec(naked) void FUN_004c7e70(void)
{
    __asm {
        sub     esp, 0x30
        mov     eax, dword ptr [esp+0x34]
        mov     edx, dword ptr [eax+0x9c]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax+0x8c]
        mov     eax, dword ptr [eax+0xac]
        mov     dword ptr [esp+0x4], ecx
        mov     ecx, dword ptr [esi+0x10]
        add     ecx, 0x80
        mov     dword ptr [esp+0x8], edx
        push    ecx
        lea     edx, [esp+0x8]
        push    edx
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x14], eax
        call    FUN_0041c830
        fld     dword ptr [esi+0x2c]
        fld     dword ptr [esp+0x10]
        mov     eax, dword ptr [esi+0x3c]
        mov     edx, dword ptr [esi+0x4c]
        fsub    st(0), st(1)
        lea     ecx, [esi+0x20]
        mov     dword ptr [esp+0x20], eax
        fstp    dword ptr [esp+0x28]
        push    -1
        push    0
        fstp    st(0)
        mov     dword ptr [esp+0x2c], edx
        fld     dword ptr [esp+0x1c]
        push    2
        fsub    dword ptr [esp+0x2c]
        lea     eax, [esp+0x34]
        push    eax
        fstp    dword ptr [esp+0x3c]
        fld     dword ptr [esp+0x28]
        fsub    dword ptr [esp+0x34]
        fstp    dword ptr [esp+0x40]
        call    FUN_0041fde0
        mov     ecx, dword ptr [esi+0x18]
        mov     edx, dword ptr [esi]
        and     ecx, 0xffffffee
        or      ecx, 4
        mov     dword ptr [esi+0x18], ecx
        mov     ecx, esi
        call    dword ptr [edx+0x10]
        mov     ecx, esi
        call    dword ptr [esi+0x1c]
        or      dword ptr [esi+0x18], 0x10
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+0x10]
        pop     esi
        add     esp, 0x30
        ret     4
    }
}
