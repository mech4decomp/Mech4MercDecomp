/*
 * FUN_005d9500 (85 B) — Destructor-style teardown: free two sub-objects
 * and call a cleanup routine. RET (no args).
 *
 * __fastcall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005d9500(void *this)
{
    

extern void __cdecl FUN_00684fa2(void);
extern void __cdecl FUN_1004084cc(void);
extern void __cdecl FUN_0068f34b(void);
extern void __cdecl FUN_1004084b5(void);
extern int DAT_007f2438;
extern void __cdecl FUN_005d9c28(void);
__asm {
push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x10]
        test    edi, edi
        mov     dword ptr [esi], 0x78829c
        jz      L9521
        mov     ecx, edi
        call FUN_00684fa2
        push    edi
        call FUN_1004084cc
        add     esp, 0x4
L9521:
        mov     edi, dword ptr [esi + 0x14]
        test    edi, edi
        jz      L9538
        mov     ecx, edi
        call FUN_0068f34b
        push    edi
        call FUN_1004084b5
        add     esp, 0x4
L9538:
        mov ecx, dword ptr [DAT_007f2438]
        push    esi
        mov     dword ptr [esi + 0x10], 0x0
        mov     dword ptr [esi + 0x14], 0x0
        call FUN_005d9c28
        pop     edi
        pop     esi
        ret
    }


}
