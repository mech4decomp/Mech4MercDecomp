/*
 * FUN_004151c0 (58 B) — archive/database subsystem: __thiscall registered-
 * class constructor/registration. Fills a 0x14-byte object (this=ECX) with
 * id/next/prev/flag fields, links it into the table at 0x7b8c0c, and if
 * flag!=0 calls FUN_004152b0. Returns the object. RET 0xc (3 stack args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c0c;
extern void FUN_004152b0(void);

__declspec(naked) void FUN_004151c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        xor     edx, edx
        mov     dword ptr [esi + 0x4], ecx
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, edx
        push    edi
        mov     edi, dword ptr [g_007b8c0c]
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x8], edx
        mov     dword ptr [esi + 0xc], edx
        mov     dword ptr [esi + 0x10], ecx
        mov     dword ptr [edi + eax*4], esi
        jz      done
        push    esi
        call    FUN_004152b0
    done:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
