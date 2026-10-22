/*
 * FUN_005f0820 (205 B) — __fastcall (ECX=this). Medium-size function.
 *
 * Calls a vtable method on this+0x78, gets a value via FUN_005f07c0,
 * manipulates globals 0x007b2208 / 0x007f25c0, calls FUN_00415230,
 * FUN_00416b60, FUN_005fbe90, FUN_005b6ee0, and accumulates float/int
 * fields on the object. Returns 1 on success, 0 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_005f07c0(void *this);
extern char __stdcall FUN_00415230(void *p);
extern int __fastcall FUN_00416b60(void *p);
extern char __fastcall FUN_005fbe90(int v);
extern int __fastcall FUN_005b6ee0(void *p);

__declspec(naked) char __fastcall FUN_005f0820(void *this)
{
    

extern int DAT_007b2208;
extern int DAT_007f25c0;
__asm {
push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     ecx, edi
        mov     ebp, eax
        call    FUN_005f07c0
        mov     esi, eax
        mov eax, dword ptr [DAT_007b2208]
        cmp     eax, 0x4
        mov     ebx, eax
        jnz     L1
        mov dword ptr [DAT_007b2208], 0x3
L1:
        mov eax, dword ptr [DAT_007f25c0]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L2
        mov     dword ptr [edi + 0x178], esi
L2:
        xor     ecx, ecx
        mov     cl, byte ptr [edi + 0x170]
        lea     edx, [esp + 0x10]
        push    edx
        mov dword ptr [DAT_007b2208], ebx
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esi + 0x384]
        call    FUN_00416b60
        mov     ebx, eax
        test    ebx, ebx
        jz      L3
        mov     eax, dword ptr [ebp + 0x1C]
        push    eax
        mov     ecx, esi
        call    FUN_005fbe90
        test    al, al
        jz      L3
        push    edi
        mov     ecx, ebx
        call    FUN_005b6ee0
        test    eax, eax
        jz      L3
        mov     edx, dword ptr [esi + 0x3BC]
        fld     dword ptr [ebp + 0x1C]
        mov     ecx, dword ptr [ebp + 0x20]
        mov     eax, dword ptr [esi + 0x3C0]
        add     edx, ecx
        mov     dword ptr [esi + 0x3BC], edx
        mov     edx, dword ptr [ebp + 0x24]
        fadd    dword ptr [esi + 0x3B8]
        add     eax, edx
        pop     edi
        mov     dword ptr [esi + 0x3C0], eax
        fstp    dword ptr [esi + 0x3B8]
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        pop     ecx
        ret
L3:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret
    }


}
