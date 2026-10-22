/*
 * FUN_00444f30 (218 B) - MLR mesh/render static-init helper.
 * Allocates and constructs four global objects (DAT_007b988c/888/884/880),
 * each a small header {ptr, 0x400} with a backing buffer allocated via
 * FUN_004084d0. The first is constructed via FUN_004151c0 with a class-name
 * string at 0x76e798.
 *
 * CFLAGS: /O1
 */

extern int DAT_007da710;
extern int DAT_007b988c;
extern int DAT_007b9888;
extern int DAT_007b9884;
extern int DAT_007b9880;

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_00444f30(void)
{
    __asm {
        push    esi
        push    edi
        push    0x14
        call    FUN_004084d0
        xor     edi, edi
        add     esp, 0x4
        cmp     eax, edi
        jz      L44f5e
        mov     ecx, dword ptr [DAT_007da710]
        push    ecx
        push    0x76e798
        push    0x6a
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [DAT_007b988c], eax
        jmp     L44f64
L44f5e:
        mov     dword ptr [DAT_007b988c], edi
L44f64:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L44f94
        push    0x800
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 0x4], 0x400
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esi], eax
        mov     dword ptr [DAT_007b9888], esi
        jmp     L44f9a
L44f94:
        mov     dword ptr [DAT_007b9888], edi
L44f9a:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L44fca
        push    0x2000
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 0x4], 0x400
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esi], eax
        mov     dword ptr [DAT_007b9884], esi
        jmp     L44fd0
L44fca:
        mov     dword ptr [DAT_007b9884], edi
L44fd0:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L45001
        push    0x400
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 0x4], 0x400
        call    FUN_004084d0
        add     esp, 0x4
        pop     edi
        mov     dword ptr [esi], eax
        mov     dword ptr [DAT_007b9880], esi
        pop     esi
        ret
L45001:
        mov     dword ptr [DAT_007b9880], edi
        pop     edi
        pop     esi
        ret
    }
}
