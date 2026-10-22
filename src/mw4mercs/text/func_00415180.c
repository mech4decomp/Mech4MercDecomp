/*
 * FUN_00415180 (18 B) — Base object initializer.
 *
 * Called by:
 *   - FUN_004D2D00 (database_ctor_path.c) to initialize a newly-allocated
 *     0x20-byte Database object before setting its specific fields.
 *   - FUN_004D2E00 (database_ctor_stream.c) same.
 *
 * Sets the object's vtable to 0x76D3F0 (the "fully-destroyed" base vtable)
 * and stores the parameter at this->field_04.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param, __stdcall return).
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

__declspec(naked) void __stdcall object_init(void)
{
    __asm {
        mov     eax, ecx                    ; EAX = this
        mov     ecx, dword ptr [esp + 0x4]  ; ECX = param
        mov     dword ptr [eax + 0x4], ecx  ; this->field_04 = param
        mov     dword ptr [eax], 0x76d3f0   ; this->vtable = 0x76D3F0
        ret     0x4                         ; return, pop 4 bytes
    }
}
